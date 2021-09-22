#include "main.h"

int main()
{
    std::ifstream inputFile("input/Graph1.txt");

    std::string inputString;

    int inputCount = 0;
    std::string var1;
    std::string var2;
    inputFile >> var1;
    inputFile >> var2;

    std::cout << "var1: " << var1 << std::endl;
    std::cout << "var2: " << var2 << std::endl;

    // std::vector<double> values;
    std::vector<double> values = {10, 12, 23, 23, 16, 23, 21, 16};

    // while(inputFile >> inputString)
    // {
    //     std::string valueString;

    //  //   std::cout << "inputString: " << inputString << std::endl;

    //     bool delimFound = false;

    //     for (char letter : inputString)
    //     {
    //         if (delimFound)
    //         {
    //             valueString += letter;
    //         }
    //         else if (letter == ',')
    //         {
    //             delimFound = true;
    //         }
    //     }

    //  //   std::cout << "valueString: " << valueString << std::endl;

    //     double value = std::stod(valueString);
    //     values.push_back(value);
    // //    std::cout << "value: " << value << std::endl;
    // }

    double standardDeviation = Probability::StandardDeviation(values);
    std::cout << "standardDeviation: " << standardDeviation << std::endl;
}

