//
// Created by Guber on 18.12.19.
//

#include <iostream>
#include "Complex.h"
#include <gtest/gtest.h>

/*
 * You will learn:
 *  - How to overload operators
 *  - How to implement and use friend functions
 *  - How to overload with friend functions
 */

int Complex::get_real() {
    return real;
}


int Complex::get_img() {
    return img;
}

void Complex::set_real(int r) {
    real = r;
}

void Complex::set_img(int i) {
    img = i;
}

Complex::Complex(int r, int i) {
    real = r;
    img = i;
}

Complex Complex::add(Complex c) {
    Complex tmp;
    tmp.real = real + c.real;
    tmp.img = img + c.img;
    return tmp;
}

/*
 * You can't overload this function with a friend function!
 * Complex Complex::operator+(Complex c) {
    Complex tmp;
    tmp.real = real + c.real;
    tmp.img = img + c.img;
    return tmp;
}
 */


Complex operator+(Complex c1, Complex c2) {
    Complex tmp;
    tmp.real = c1.real + c2.real;
    tmp.img = c1.img + c2.img;
    return tmp;
}


//std::ostream& operator<<(std::ostream& o, Complex& c)
void operator<<(std::ostream &o, Complex &c) {
    o << c.get_real() << " +i" << c.get_img();
}


TEST(Operator_Overloading, Testing_Members) {
    Complex c1{3, 7};
    Complex c2{5, 4};

    //Setters and Getters
    c2.set_real(6);

    c2.set_img(5);
    EXPECT_EQ(c2.get_real(), 6);

    EXPECT_EQ(c2.get_img(), 5);
}

TEST(Operator_Overloading, Adding_Complex_Numbers) {
    Complex c1{3, 7};
    Complex c2{5, 4};
    Complex c3, c4, c5;

    c3 = c1.add(c2);
    EXPECT_EQ(c3.get_real(), 8);
    EXPECT_EQ(c3.get_img(), 11);

    c5 = c1 + c2;
    EXPECT_EQ(c5.get_real(), 8);
    EXPECT_EQ(c5.get_img(), 11);

    // c4 = c1.operator+(c3);

    std::cout << " " << std::endl;
    std::cout << c5;

}

