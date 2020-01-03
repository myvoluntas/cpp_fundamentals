//
// Created by Guber on 03.01.20.
//

#include <gtest/gtest.h>
#include <stdio.h>
#include <stdlib.h>


/*
extern "C" {    // another way
    struct Array {
        int *A;
        int size;
        int length;
    };
}
*/

TEST(Initialization_Of_Array, Use_The_Debugger) {
    int A[5];
    int B[5] = {1, 2, 3, 5, 6};
    int C[10] = {3, 4, 6};
    int D[5] = {0};
    int E[] = {1, 2, 3, 4, 5, 6};
}

