#include "_StudentT.h"
#include <cstring>
#include <iostream>

StudentT::StudentT(const char *_hName, const char *_uName, const char *_fName, int _A, const char *_G):Uni(_uName, _fName), Human(_hName, _A)
{
    this->_group = new char[strlen(_G) + 1];
    strcpy(this->_group, _G);
}

void StudentT::print()
{
    Uni::print();
    Human::print();

    std::cout << this->_group << std::endl;
}

void StudentT::setGroup(const char *_InputG)
{
    this->_group = new char[strlen(_InputG) + 1];
    strcpy(this->_group, _InputG);
}

char *StudentT::getGroup() const
{
    return this->_group;
}

StudentT::~StudentT()
{
    delete[] this->_group;
}
