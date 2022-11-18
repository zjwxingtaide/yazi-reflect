#include <iostream>
using namespace std;

#include "ClassFactory.h"
using namespace yazi::reflect;

#include "test/A.h"

int main()
{
    ClassFactory * factory = Singleton<ClassFactory>::instance();
    Object * a = factory->create_class("A");
    
    string name;
    a->get("m_name", name);
    a->set("m_name", "kitty");

    int age;
    a->get("m_age", age);
    a->set("m_age", 30);

    a->call("f1");
    a->call("f2");
    a->show();

    return 0;
}
