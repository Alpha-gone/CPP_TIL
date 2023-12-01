//
// Created by User on 2023-11-29.
//

#ifndef CPP_TIL_COMPLEX_H
#define CPP_TIL_COMPLEX_H


class Complex {
    double real;
    double img;

    public:
        Complex(double real, double img);
        Complex(const Complex& complex);

        Complex operator+(const Complex& complex);
        Complex operator-(const Complex& complex);
        Complex operator*(const Complex& complex);
        Complex operator/(const Complex& complex);
        Complex & operator=(const Complex& complex);

        Complex operator+=(const Complex& complex);
        Complex operator-=(const Complex& complex);
        Complex operator*=(const Complex& complex);
        Complex operator/=(const Complex& complex);


        void println();
};
#endif //CPP_TIL_COMPLEX_H
