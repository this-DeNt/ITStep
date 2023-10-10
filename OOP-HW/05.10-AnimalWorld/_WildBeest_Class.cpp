#include "_WildBeest_Class.h"
#include "framework.h"

#define GRASS 10

WildBeest::WildBeest(const double _InputWeight, const bool _InputBAlive, Continent* _InputCont, const char *_InputName):Animal(_InputWeight, _InputBAlive, _InputCont)
{
    this->_name = new char[strlen(_InputName) + 1];
    strcpy(this->_name, _InputName);
}

void WildBeest::eat(void)
{
    std::cout << this->_name << " is eating grass: " << " +" << GRASS << "kg" << std::endl;

    this->_weight += GRASS;
}

WildBeest::~WildBeest()
{
    delete[] this->_name;
}
