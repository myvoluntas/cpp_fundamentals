//
// Created by Guber on 16.12.19.
//
#include <iostream>
#include <gtest/gtest.h>

void sum_up(int input) {
    int sum = 0;
    int n = input;
    for (int i = 1; i <= n; i++) {
        std::cout << sum << std::endl;
        sum += i;
    }
}

TEST(Printing_Cout_in_Test, Cout_in_Function) {
    sum_up(9);
}