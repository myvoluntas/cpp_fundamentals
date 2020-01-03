//
// Created by Guber on 22.12.19.
//

#include <gtest/gtest.h>
#include "Base.h"
#include "Derived.h"

#include <iostream>


TEST(DerivedTests, TracingDefaultConstrucotrChain) {
    std::cout << " " << std::endl;
    std::cout << "Calling Derived d" << std::endl;
    Derived d;
}

TEST(DerivedTests, TracingParameterizedConstructorChain) {
    std::cout << " " << std::endl;
    Derived d{21};
}

TEST(DerivedTests, TracingThirdParameterizedConstructorChain) {
    std::cout << " " << std::endl;
    Derived c{10, 20};
}