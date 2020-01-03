//
// Created by Guber on 18.12.19.
//
#include <iostream>

#ifndef CPP_FUNDAMENTALS_COMPLEX_H
#define CPP_FUNDAMENTALS_COMPLEX_H


class Complex {
    int real;
    int img;

public:
    int get_real();

    int get_img();

    void set_real(int r);

    void set_img(int i);

    Complex(int r = 0, int i = 0);


    Complex add(Complex c);

    //Complex operator+(Complex c);

    friend Complex operator+(Complex c1, Complex c2);

    // friend std::ostream& operator<<(std::ostream& o, Complex& c);
    friend void operator<<(std::ostream &o, Complex &c);
};


#endif //CPP_FUNDAMENTALS_COMPLEX_H
