//
// Created by Guber on 17.12.19.
//

#include <gtest/gtest.h>

void swap_by_value(int a, int b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

TEST(Ways_of_Parameter_Passing, Pass_By_Value) {
    int x = 10;
    int y = 20;

    swap_by_value(x, y);

    // x and y gets not swapped
    EXPECT_NE(x, 20);
    EXPECT_NE(y, 10);

    // values of x and y still the same
    EXPECT_EQ(x, 10);
    EXPECT_EQ(y, 20);
}


void swapp_by_address(int *a, int *b) {
    int tmp;

    // * for dereferencing: swaps the data not the address
    tmp = *a;
    *a = *b;
    *b = tmp;
}

TEST(Ways_of_Parameter_Passing, Pass_by_Address) {
    int x = 10;
    int y = 20;

    swapp_by_address(&x, &y);

    // x and y gets swapped
    EXPECT_EQ(x, 20);
    EXPECT_EQ(y, 10);

    // values of x and y still the same
    EXPECT_EQ(x, 20);
    EXPECT_EQ(y, 10);
}


void swap_by_reference(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

TEST(Ways_of_Parameter_Passing, Pass_by_Reference) {
    int x = 10;
    int y = 20;

    swapp_by_address(&x, &y);

    // x and y gets swapped
    EXPECT_EQ(x, 20);
    EXPECT_EQ(y, 10);

    // values of x and y still the same
    EXPECT_EQ(x, 20);
    EXPECT_EQ(y, 10);
}


int *fun(int size) {
    int *p = new int[size];

    for (int i = 0; i < size; i++) {
        p[i] = i + 1;
    }

    return p;
}

TEST(Ways_of_Returning_Values, Return_by_Address) {
    int *ptr = fun(5);

    std::cout << " " << std::endl;
    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "&ptr: " << *ptr + 1 << std::endl;

    //Fails
    for (int i = 0; i <= 8; ++i) {
        std::cout << (*ptr + i) << std::endl;
    }
    int array[5]{1, 2, 3, 4, 5};

    //EXPECT_EQ(*ptr, array);
}

int return_input(int &a) {
    return ++a;
}

TEST(Ways_of_Returning_Values, Return_by_Reference) {
    int x = 10;

    return_input(x);

    EXPECT_EQ(11, x);
}