#include "_Uni.h"
#include <cstring>
#include <iostream>

Uni::Uni(const char *_InputName, const char *_InputF)
{
    this->_name = new char[strlen(_InputName) + 1];
    strcpy(this->_name, _InputName);

    this->_faculty = new char[strlen(_InputF) + 1];
    strcpy(this->_faculty, _InputF);
}

void Uni::print(void) const
{
    std::cout << this->_name << std::endl << this->_faculty << std::endl;
}

void Uni::setName(const char *_InputName)
{
    this->_name = new char[strlen(_InputName) + 1];
    strcpy(this->_name, _InputName);
}

void Uni::setF(const char *_InputF)
{
    this->_faculty = new char[strlen(_InputF) + 1];
    strcpy(this->_faculty, _InputF);
}

char *Uni::getName(void) const
{
    return this->_name;
}

char *Uni::getF(void) const
{
    return this->_faculty;
}

Uni::~Uni()
{
    delete[] this->_name;
    delete[] this->_faculty;
}
