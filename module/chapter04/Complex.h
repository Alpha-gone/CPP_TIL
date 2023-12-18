//
// Created by User on 2023-11-29.
//

#ifndef CPP_TIL_COMPLEX_H
#define CPP_TIL_COMPLEX_H


class Complex {
    double real;
    double img;

    double get_number(const char* str, int from, int to);

    public:
        Complex(double real, double img);
        Complex(const Complex& complex);
        Complex(const char* str);

        Complex operator+(const Complex& complex);
        Complex operator-(const Complex& complex);
        Complex operator*(const Complex& complex);
        Complex operator/(const Complex& complex);

        Complex operator+(const char* str);
        Complex operator-(const char* str);
        Complex operator*(const char* str);
        Complex operator/(const char* str);

        Complex & operator=(const Complex& complex);

        Complex& operator+=(const Complex& complex);
        Complex& operator-=(const Complex& complex);
        Complex& operator*=(const Complex& complex);
        Complex& operator/=(const Complex& complex);

        friend Complex operator+(const Complex&a, const Complex& b);

        void println();
};

#endif //CPP_TIL_COMPLEX_H
