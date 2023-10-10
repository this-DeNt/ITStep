#include "_Lion_Class.h"
#include "framework.h"

Lion::Lion(const double _InputWeight, const bool _InputBAlive, Continent* _InputCont, const char *_InputName):Animal(_InputWeight, _InputBAlive, _InputCont)
{
    this->_name = new char[strlen(_InputName) + 1];
    strcpy(this->_name, _InputName);
}

void Lion::eat(const WildBeest &_InputAnimal)
{
    std::cout << this->_name << " is eating " << 
}
