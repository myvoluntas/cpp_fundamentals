//
// Created by Guber on 14.12.19.
//

#include <gtest/gtest.h>

/*
 * Increment Decrement Operators
 *
 * - pre inc:   ++x;
 * - post inc:  x++;
 * - pre dec:   --x;
 * - post dex:  x--;
 */

int pre_inc_x(int x) {
    int y;
    int xx = x;
    y = ++xx;
    return xx;
}

int post_inc(int x) {
    return x++;
}

TEST(ExampeTest, PreIncTest) {
    int y;
    int x = 5;

    y = ++x;

    EXPECT_EQ(x, y);
}