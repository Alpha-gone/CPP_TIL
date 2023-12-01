//
// Created by User on 2023-11-29.
//

#include <iostream>
#include "Complex.h"

Complex::Complex(double real, double img): real(real), img(img) {}

Complex::Complex(const Complex &complex) {
    real = complex.real;
    img = complex.img;
}

Complex Complex::operator+(const Complex &complex) {
    return Complex(real + complex.real, img + complex.img);
}

Complex Complex::operator-(const Complex &complex) {
    return Complex(real - complex.real, img - complex.img);
}

Complex Complex::operator*(const Complex &complex) {
    return Complex(real * complex.real - img * complex.img, real * complex.img + img * complex.real);
}

Complex Complex::operator/(const Complex &complex) {
    return Complex(
            (real * complex.real + img * complex.img) / (complex.real * complex.real + complex.img + complex.img),
            (real * complex.real - img * complex.img) / (complex.real * complex.real + complex.img + complex.img)
            );
}

Complex& Complex::operator=(const Complex &complex) {
    real = complex.real;
    img = complex.img;

    return *this;
}

void Complex::println() {
    std::cout << "( " << real << ", " << img << " ) \n";
}