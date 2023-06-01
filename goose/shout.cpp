#include "goose.hpp"
#include "capitalize.hpp"
#include <iostream>

void Goose::shout()
{
    Capitalizer cap;
    std::cout
        << cap(Goose::sound)
        << "!!!" << std::endl;
}

