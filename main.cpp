#include "main.h"

int main()
{
    std::ifstream inputFile("input/Graph2.txt");

    std::string inputString;

    int inputCount = 0;

    // skip the first 2 files
    std::string column1;
    std::string column2;
    inputFile >> column1;
    inputFile >> column2;

    std::cout << "column1: " << column1 << std::endl;
    std::cout << "column2: " << column2 << std::endl;

    std::vector<double> values;

    while(inputFile >> inputString)
    {
        std::string valueString;

        bool delimFound = false;

        for (char letter : inputString)
        {
            if (delimFound)
            {
                valueString += letter;
            }
            else if (letter == ',')
            {
                delimFound = true;
            }
        }

        double value = std::stod(valueString);
        values.push_back(value);
    }

    double standardDeviation = Probability::StandardDeviation(values);
    std::cout << "Standard Deviation: " << standardDeviation << std::endl;
}

