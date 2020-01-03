//
// Created by Guber on 20.12.19.
//

#include <gtest/gtest.h>
#include "Rational.h"

TEST(RationalTests, TestingAllMethodsOfRational) {
    Rational r1{3, 4};
    Rational r2{r1};

    EXPECT_EQ(r1.getNumerator(), 3);
    EXPECT_EQ(r1.getDenominator(), 4);

    r1.setNumerator(5);
    r1.setDenominator(6);

    EXPECT_EQ(r1.getNumerator(), 5);
    EXPECT_EQ(r1.getDenominator(), 6);

    EXPECT_EQ(r2.getNumerator(), 3);
    EXPECT_EQ(r2.getDenominator(), 4);

    Rational r3;
    r3 = r1 + r2;

    EXPECT_EQ(r3.getNumerator(), 8);
    EXPECT_EQ(r3.getDenominator(), 10);

    std::cout << " " << std::endl;
    std::cout << r3;

}