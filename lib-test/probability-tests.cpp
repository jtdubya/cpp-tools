#include <gtest/gtest.h>
#include "probability.h"

std::vector<double> manyNumbers = {46, 69, 32, 60, 52, 41};
std::vector<double> twoNumbers{1, 2};

TEST(VarianceTest, TwoNumbers)
{
    double result = Probability::Variance(twoNumbers);
    EXPECT_DOUBLE_EQ(result, 0.5);
}

TEST(VarianceTest, ManyNumbers)
{
    double result = Probability::Variance(manyNumbers);
    EXPECT_DOUBLE_EQ(result, 177.2);
}

TEST(StandardDeviationTest, TwoNumbers)
{
    double result = Probability::StandardDeviation(twoNumbers);
    EXPECT_DOUBLE_EQ(result, 0.7071067811865475);
}

TEST(StandardDeviationTest, ManyNumbers)
{
    double result = Probability::StandardDeviation(manyNumbers);
    EXPECT_DOUBLE_EQ(result, 13.311649033834989);
}