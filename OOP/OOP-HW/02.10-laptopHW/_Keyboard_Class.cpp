#include "_Keyboard_Class.h"

Keyboard::Keyboard():_name(nullptr)
{
    this->_price = 0;
}

Keyboard::Keyboard(const std::string _InputName, const double _InputPrice):_name(_InputName)
{
    this->_price = _InputPrice;
}

Keyboard::Keyboard(Keyboard &_InputKB):_name(_InputKB._name)
{
    this->_price = _InputKB._price;
}

std::string Keyboard::getName() const
{
    return this->_name;
}

double Keyboard::getPrice() const
{
    return this->_price;
}

void Keyboard::setPrice(const double _InputPrice)
{
    this->_price = _InputPrice;
}
