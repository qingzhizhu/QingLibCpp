#include "Test.h"

Test::Test()
{
    //ctor
}

Test::~Test()
{
    //dtor
}

Test::Test(const Test& other)
{
    //copy ctor
}

Test& Test::operator=(const Test& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
