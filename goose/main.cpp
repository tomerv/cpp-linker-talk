#include "goose.hpp"
#include <iostream>

int main()
{
    Goose goose;
    std::cout << "The goose says: ";
    goose.talk();
    std::cout << "The goose shouts: ";
    goose.shout();
    return 0;
}
