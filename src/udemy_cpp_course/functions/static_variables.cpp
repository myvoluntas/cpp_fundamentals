//
// Created by Guber on 18.12.19.
//
#include <iostream>
#include <gtest/gtest.h>

int fun() {
    static int v = 0;
    int a = 5;
    v++;
    std::cout << " " << std::endl;
    std::cout << "a: " << a << " static v: " << v << std::endl;
    return v;
}


TEST(Static_Variables, Multiple_fun_calls) {
    EXPECT_EQ(fun(), 1);
    EXPECT_EQ(fun(), 2);
    EXPECT_EQ(fun(), 3);

    int a = 20;
}

