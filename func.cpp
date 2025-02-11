#include "Func.h"
#include <iostream>

Person::Person(const std::string &name, int age)
    : m_name(name), m_age(age) {}

void Person::printDetails()
{
    std::cout << m_name << " is " << m_age << " years old!\n";
}