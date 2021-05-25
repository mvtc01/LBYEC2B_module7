#include "Calculator.h"
#include <iostream>

Calculator::Calculator()
{
    std::cout << "Welcome to my Calculator" << '\n';
}

int Calculator::addition(int a, int b)
{
    return (a + b);
}

int Calculator::subtraction(int a, int b)
{
    return (a - b);
}

int Calculator::multiplication(int a, int b)
{
    return (a * b);
}

float Calculator::division(int a, int b)
{
    if (b == 0)
        throw "Division by zero!";

    return (a * 1.0 / b);
}
