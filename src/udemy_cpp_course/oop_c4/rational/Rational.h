//
// Created by Guber on 20.12.19.
//

#ifndef CPP_FUNDAMENTALS_RATIONAL_H
#define CPP_FUNDAMENTALS_RATIONAL_H

#include <ostream>


class Rational {
    int numerator;
    int denominator;

public:
    Rational(int numerator = 0, int denominator = 0);

    Rational(Rational &rational);

    int getNumerator() const;

    int getDenominator() const;

    void setNumerator(int numerator);

    void setDenominator(int denominator);

    Rational operator+(Rational &rational);

    friend std::ostream operator<<(std::ostream &o, Rational &rational);
};


#endif //CPP_FUNDAMENTALS_RATIONAL_H

