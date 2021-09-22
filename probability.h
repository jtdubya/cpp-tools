#ifndef PROBABILITY_H
#define PROBABILITY_H

#include <string>
#include <vector>
#include <numeric>
#include <cmath>

class Probability 
{
    public:
        static double Variance(std::vector<double> &values);
        static double StandardDeviation(std::vector<double> &values);
};

#endif // PROBABILITY_H