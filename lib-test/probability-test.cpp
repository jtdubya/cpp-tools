#include <gtest/gtest.h>
#include "../lib/probability.h"

std::vector<double> inputValues = { 46, 69,	32,	60,	52,	41 };

TEST(VarianceTest, TwoNumbers)
{
    std::vector<double> inputVals = {1, 2};
    double result = Probability::Variance(inputVals);
    EXPECT_DOUBLE_EQ(result, 0.5);
}

TEST(VarianceTest, ManyNumbers)
{
    double result = Probability::Variance(inputValues);
    EXPECT_DOUBLE_EQ(result, 177.2);
}