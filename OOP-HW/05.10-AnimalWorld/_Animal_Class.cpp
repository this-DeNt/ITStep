#include "_Animal_Class.h"

Animal::Animal(const double _InputWeight, const bool _InputBAlive, Continent *_InputCont)
{
    this->_weight = _InputWeight;
    this->_alive = _InputBAlive;
    this->_continent = _InputCont;
}

bool Animal::isAlive(void) const
{
    return this->_alive;
}

double Animal::getWeight(void) const
{
    return this->_weight;
}

Animal::~Animal() {

    delete _continent;
}
