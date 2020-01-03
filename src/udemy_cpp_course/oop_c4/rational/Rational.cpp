//
// Created by Guber on 20.12.19.
//

#include "Rational.h"
#include <iostream>

int Rational::getNumerator() const {
    return numerator;
}

int Rational::getDenominator() const {
    return denominator;
}

void Rational::setNumerator(int numerator) {
    Rational::numerator = numerator;
}

void Rational::setDenominator(int denominator) {
    Rational::denominator = denominator;
}

Rational::Rational(int numerator, int denominator) {
    Rational::numerator = numerator;
    Rational::denominator = denominator;
}

Rational::Rational(Rational &rational) {
    this->numerator = rational.numerator;
    this->denominator = rational.denominator;
}

Rational Rational::operator+(Rational &rational) {
    Rational tmp{0, 0};

    tmp.numerator = this->numerator + rational.numerator;
    tmp.denominator = this->denominator + rational.denominator;
    return tmp;
}

std::ostream operator<<(std::ostream &o, Rational &rational) {
    std::cout << rational.getNumerator() << " / " << rational.getDenominator() << std::endl;
}
