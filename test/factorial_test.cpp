#include "factorial.h"
#include <gtest/gtest.h>

TEST(FactorialTest, HandlesZero) {
    EXPECT_EQ(factorial(0), 1);
}

TEST(FactorialTest, HandlesPositive) {
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(2), 2);
    EXPECT_EQ(factorial(5), 120);
}

TEST(FactorialTest, HandlesNegative) {
    EXPECT_EQ(factorial(-3), 0);
}
