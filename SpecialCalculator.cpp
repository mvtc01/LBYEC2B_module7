#include "SpecialCalculator.h"
#include <iostream>
#include "Calculator.cpp"

int CalculatorWithMod::modulo(int a, int b)
{
    if (b == 0)
        throw "Division by zero!";

    return (a % b);
}
