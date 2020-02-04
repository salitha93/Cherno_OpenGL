#include <iostream>
#include "Test.h"

void Test::setValue(int val)
{
    value = val;
    std::cout << "setValue function is called" << std::endl;
}