#pragma once

struct B
{
    virtual ~B() = 0;
};

struct C : public B
{
    virtual ~C() {}
};


