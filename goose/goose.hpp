#pragma once

#include <string>
#include <iostream>

class Goose
{
public:
    Goose() {}
    void talk();
    void shout();
private:
    // C++17 feature
    inline static const char* sound = "ga ga";
};

