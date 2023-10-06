#include "_Continent_Class.h"

Continent::Continent(const double _InputMedTemp, const double _InputArea, Animal *_InputHerb, Animal *_InputCarn)
{
    this->_area = _InputArea;
    this->_carnivor = _InputCarn;
    this->_herbivor = _InputHerb;
    this->_medTemp = _InputMedTemp;
}

double Continent::getContMedTemp(void) const
{
    return this->_medTemp;
}

double Continent::getArea(void) const
{
    return this->_area;
}

Continent::~Continent()
{
    delete _herbivor;
    delete _carnivor;
}
