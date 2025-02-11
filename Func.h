#include "func.cpp"
#include <string>

class Person
{
    public:
        Person(const std::string& name, int age);
        ~Person();
    private:
        std::string m_name;
        int m_age;
};