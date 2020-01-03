//
// Created by Guber on 01.01.20.
// Chapter 5
//

#include <gtest/gtest.h>
#include <iomanip>

int recursive_sum(int n) {
    if (n == 0)
        return 0;
    else return recursive_sum(n - 1) + n;
}

int looped_sum(int n) {
    int s = 0;
    for (auto i = 0; i <= n; i++) {
        s += i;
    }
    return s;
}

int formula_sum(int n) {
    return n * (n + 1) / 2;
}

TEST(testing_recursion, sum_of_n_elements) {
    EXPECT_EQ(recursive_sum(5), 15);
    EXPECT_EQ(looped_sum(5), recursive_sum(5));
    EXPECT_EQ(formula_sum(5), recursive_sum(5));
}


int recursive_fact(int n) {
    if (n == 0)
        return 1;
    else return recursive_fact(n - 1) * n;
}

int looped_fact(int n) {
    int f = 1;
    for (auto i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

TEST(testing_recursion, factorial_of_n) {
    EXPECT_EQ(recursive_fact(5), 1 * 2 * 3 * 4 * 5);
    EXPECT_EQ(looped_fact(5), recursive_fact(5));
}


int pow(int m, int n) {
    if (n == 0)
        return 1;
    else return pow(m, n - 1) * m;
}

int opt_pow(int m, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return opt_pow(m * m, n / 2);
    else return m * opt_pow(m * m, (n - 1) / 2);
}

/*unsigned int looped_pow(unsigned int m, unsigned int n) {

    for (auto i = 1; i <= n; i++) {
        m = m * m;
    }
    return m;
}*/

TEST(testing_recursion, m) {
    EXPECT_EQ(pow(2, 9), 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2);
    EXPECT_EQ(pow(2, 9), opt_pow(2, 9));
//    EXPECT_EQ(pow(2, 9), looped_pow(2, 9));
}

double e(int x, int n) {
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;
    else {
        r = e(x, n - 1);
        p *= x;
        f *= n;
    }

    return r + (p / f);
}

TEST(testing_recursion, taylor_series) {
    std::cout << "should print: 54.59" << e(4, 15);
}
