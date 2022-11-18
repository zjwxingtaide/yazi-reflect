#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "ClassRegister.h"
using namespace yazi::reflect;


class A : public Object
{
public:
    A() : m_name("a"), m_age(18) {}

    void show()
    {
        std::cout << "name=" << m_name << ",age=" << m_age << std::endl;
    }

    void f1()
    {
        std::cout << "f1" << std::endl;
    }

    void f2()
    {
        std::cout << "f2" << std::endl;
    }

public:
    string m_name;
    int m_age;
};

REGISTER_CLASS(A);
REGISTER_CLASS_FIELD(A, m_name, string);
REGISTER_CLASS_FIELD(A, m_age, int);
REGISTER_CLASS_METHOD(A, f1);
REGISTER_CLASS_METHOD(A, f2);
