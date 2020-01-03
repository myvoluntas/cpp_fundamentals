//
// Created by Guber on 21.12.19.
//

#include <gtest/gtest.h>
#include "Cuboid.h"

class CuboidTests : public ::testing::Test {
protected:
    Cuboid cubic;
    Cuboid cubic_large{10, 15, 20};
};

TEST_F(CuboidTests, TestingBaseConstructors) {
    //cubic;
    EXPECT_EQ(cubic.getHeight(), 1);
    EXPECT_EQ(cubic.get_length(), 1);
    EXPECT_EQ(cubic.get_breadth(), 1);

    // Change cubic data to see what happens in next Test_F
    cubic.set_length(3);
    cubic.setHeight(4);
    EXPECT_EQ(cubic.get_length(), 3);
    EXPECT_EQ(cubic.getHeight(), 4);
    //cubic.length;
}

TEST_F(CuboidTests, CallingMethodsFromBaseClassInDerivedClass) {
    // Cubic has Initial State
    EXPECT_NE(cubic.get_length(), 3);
    EXPECT_NE(cubic.getHeight(), 4);

    cubic.set_length(10);
    cubic.set_breadth(5);
    EXPECT_EQ(cubic.area(), 50);
    EXPECT_EQ(cubic.perimeter(), 30);
}


TEST_F(CuboidTests, CallingMethodsInBaseClassFromDerivedClass) {
    //cubic_large;

    EXPECT_EQ(cubic_large.get_length(), 10);
    EXPECT_EQ(cubic_large.get_breadth(), 15);
    EXPECT_EQ(cubic_large.getHeight(), 20);

    int volume = 10 * 15 * 20;
    EXPECT_EQ(cubic_large.volume(), volume);
}