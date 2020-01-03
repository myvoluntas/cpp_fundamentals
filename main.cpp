#include <iostream>
#include <gtest/gtest.h>
#include "src/udemy_cpp_course/fundamentals/operators.h"



/*
int main() {
        std::cout << "Hello, World!" << std::endl;
        return 0;
}
*/

TEST(BasicTest, TestName) {
    EXPECT_EQ(6, pre_inc_x(5));
}