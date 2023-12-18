//
// Created by User on 2023-11-29.
//

#include <iostream>
#include <cstring>
#include "Complex.h"

Complex operator+(const Complex& a, const Complex& b){
//    return Complex(a).operator+(b);
    return Complex(a.real + b.real, a.img + b.img);
}

double Complex::get_number(const char* str, int from, int to) {
    bool minus = false;
    if(from > to) return false;

    if(str[from] == '-') minus = true;
    if(str[from] == '-' || str[from] == '+') from++;

    double num = 0.0;
    double decimal = 1.0;

    bool integer_part = true;
    for(int i = from; i <= to; i++) {
        if(isdigit(str[i]) && integer_part) {
            num *= 10.0;
            num += (str[i] - '0');
        }else if(str[i] == '.') {
            integer_part = false;
        }else if(isdigit(str[i]) && !integer_part){
            decimal /= 10.0;
            num += ((str[i] - '0') * decimal);
        }else {
            break;
        }
    }

    if (minus) num *= -1.0;

    return num;
}

Complex::Complex(double real, double img): real(real), img(img) {}

Complex::Complex(const Complex &complex) {
    real = complex.real;
    img = complex.img;
}

Complex::Complex(const char *str) {
    int begin =0;
    int end = strlen(str);

    img = 0.0;
    real = 0.0;

    int pos_i = -1;
    for (int i =0; i < end; i++) {
        if (str[i] == 'i') {
            pos_i = i;
            break;
        }
    }

    if (pos_i == -1){
        real = get_number(str, begin, end-1);
        return;
    }

    real = get_number(str, begin, pos_i  - 1);
    img = get_number(str, pos_i + 1, end -1);

    if (pos_i >= 1 && str[pos_i - 1] == '-') img *= -1.0;
}



Complex Complex::operator+(const Complex& complex) {
    return Complex(real + complex.real, img + complex.img);
}

Complex Complex::operator-(const Complex& complex) {
    return Complex(real - complex.real, img - complex.img);
}

Complex Complex::operator*(const Complex& complex) {
    return Complex(real * complex.real - img * complex.img, real * complex.img + img * complex.real);
}

Complex Complex::operator/(const Complex& complex) {
    return Complex(
            (real * complex.real + img * complex.img) / (complex.real * complex.real + complex.img + complex.img),
            (real * complex.real - img * complex.img) / (complex.real * complex.real + complex.img + complex.img)
            );
}

Complex Complex::operator+(const char *str) {
    return (*this) + Complex(str);
}

Complex Complex::operator-(const char *str) {
    return (*this) - Complex(str);
}

Complex Complex::operator*(const char *str) {
    return (*this) * Complex(str);
}

Complex Complex::operator/(const char *str) {
    return (*this) / Complex(str);
}

Complex& Complex::operator=(const Complex& complex) {
    real = complex.real;
    img = complex.img;

    return *this;
}

Complex& Complex::operator+=(const Complex &complex) {
    (*this) = (*this) + complex;
    return *this;
}

Complex& Complex::operator-=(const Complex &complex) {
    (*this) = (*this) - complex;
    return *this;
}

Complex& Complex::operator*=(const Complex &complex) {
    (*this) = (*this) * complex;
    return *this;
}

Complex& Complex::operator/=(const Complex &complex) {
    (*this) = (*this) / complex;
    return *this;
}

void Complex::println() {
    std::cout << "( " << real << ", " << img << " ) \n";
}