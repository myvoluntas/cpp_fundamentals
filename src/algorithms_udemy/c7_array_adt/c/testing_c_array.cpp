//
// Created by Guber on 03.01.20.
//

#include <gtest/gtest.h>

extern "C" {    // another way
#include "array_adt_version_c.h"
};




TEST(C_Implementation_Of_Array, Initialize_Array) {
    struct Array arr1;
    arr1.size = 5;
    arr1.A = new int[5]; //(int *) malloc(arr1.size * sizeof(int));
    arr1.length = 5;
    int array[5] = {2, 3, 4, 5, 6};
    arr1.A = array;
    std::cout << " " << *arr1.A;
}
