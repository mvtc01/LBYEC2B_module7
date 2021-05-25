#include "SpecialCalculator.h"
#include "Calculator.cpp"
#include <iostream>


int CalculatorWithMod::modulo(int a, int b)
{
    if (b == 0)
        throw "Division by zero!";

    return (a % b);
}
