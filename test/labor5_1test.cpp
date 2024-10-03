#include "../labor5_1.hpp" 
#include <gtest/gtest.h>
#include <cmath>


TEST(FunctionTests, TestF) {
    EXPECT_DOUBLE_EQ(f(1, 0, 0), 1);
    EXPECT_DOUBLE_EQ(f(0, 1, 0), 0);
    EXPECT_DOUBLE_EQ(f(0, 0, 1), 1);
    EXPECT_DOUBLE_EQ(f(1, M_PI, 1), 1 + M_PI);
    EXPECT_DOUBLE_EQ(f(1, 2 * M_PI, 2), 1);
}


TEST(MainFunctionTests, TestMainCalculation) {
    double s = 1.0;
    double t = 2.0;

    double expected_result = (f(1, t + s, s) + f(t, s * t, 1)) / (1 + f(s, 1, t) * f(s, 1, t));

    double part1 = f(1, t + s, s);          // f(1, 3, 1)
    double part2 = f(t, s * t, 1);          // f(2, 2, 1)
    double denominator = 1 + f(s, 1, t) * f(s, 1, t); // 1 + f(1, 1, 2) * f(1, 1, 2)

    EXPECT_DOUBLE_EQ(expected_result, (part1 + part2) / denominator);
}
