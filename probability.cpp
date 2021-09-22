
#include "probability.h"

double Variance(std::vector<double> &values)
{
    double sum = std::accumulate(values.begin(), values.end(), 0);
    double mean = sum / values.size();
    double sumOfSquares;

    for (int i = 0; i < values.size(); i++)
    {
        double deviation = values[i] - mean;
        double deviationsSquared = std::pow(deviation, 2);
        sumOfSquares += deviationsSquared;
    }

    double N = values.size() - 1;

    return sumOfSquares / N;
}

double StandardDeviation(std::vector<double> &values)
{
    double variance = Variance(values);
    return std::sqrt(variance);
}