#pragma once

#include <iostream>
using namespace std;

#include "ClassRegister.h"
using namespace yazi::reflect;


class B : public Object
{
public:
    B() : m_name("b") {}
    ~B() {}

    void show()
    {
        std::cout << m_name << std::endl;
    }

private:
    string m_name;
};

REGISTER_CLASS(B);
