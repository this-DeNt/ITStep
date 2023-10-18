#include "_Human.h"
#include <cstring>
#include <iostream>

Human::Human(const char *_InputName, const int _InputAge)
{
    this->_name = new char[strlen(_InputName) + 1];
    strcpy(this->_name, _InputName);

    this->_age = _InputAge;
}

void Human::print(void) const
{
    std::cout << this->_name << std::endl << this->_age << std::endl;
}

void Human::input(void)
{
    std::cout << "Input name: ";
    char buffer[50];
    std::cin.getline(buffer, 50);

    std::cout << "Input age: ";
    int a;
    std::cin >> a;

    delete[] this->_name;
    this->_name = new char[strlen(buffer) + 1];
    strcpy(this->_name, buffer);

    this->_age = a;
}

void Human::setName(const char *_InputName)
{
    delete[] this->_name;
    this->_name = new char[strlen(_InputName) + 1];
    strcpy(this->_name, _InputName);
}

void Human::setAge(const int _InputAge)
{
    this->_age = _InputAge;
}

int Human::getAge(void) const
{
    return this->_age;
}

char *Human::getName(void) const
{
    return this->_name;
}

Human::~Human()
{
    delete[] this->_name;
}
