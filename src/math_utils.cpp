#include "math_utils.hpp"
#include <stdexcept>

int add(int a, int b)
{
    return a + b;

    // test fail
    // return a - b;
}

double divide(int a, int b)
{
    // if (b == 0)
    // {
    //     throw std::invalid_argument("Division by zero");
    // }
    // return static_cast<double>(a) / b;

    // static analysis fail
    return a / 0;
}