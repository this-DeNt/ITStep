#include "_Speakers_Class.h"

Speakers::Speakers():_name(nullptr)
{
    this->_price = 0;
}

Speakers::Speakers(const std::string _InputName, const double _InputPrice):_name(_InputName)
{
    this->_price = _InputPrice;
}

Speakers::Speakers(Speakers &_InputSpeaker):_name(_InputSpeaker._name)
{
    this->_price = _InputSpeaker._price;
}

std::string Speakers::getName() const
{
    return this->_name;
}

double Speakers::getPrice() const
{
    return this->_price;
}

void Speakers::setPrice(const double _InputPrice)
{
    this->_price = _InputPrice;
}