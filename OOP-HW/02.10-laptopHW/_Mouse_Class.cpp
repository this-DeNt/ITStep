#include "_Mouse_Class.h"

Mouse::Mouse():_name(nullptr)
{
    this->_price = 0;
}

Mouse::Mouse(const std::string _InputName, const double _InputPrice):_name(_InputName)
{
    this->_price = _InputPrice;
}

Mouse::Mouse(Mouse &_InputMouse):_name(_InputMouse._name)
{
    this->_price = _InputMouse._price;
}

std::string Mouse::getName() const
{
    return this->_name;
}

double Mouse::getPrice() const
{
    return this->_price;
}

void Mouse::setPrice(const double _InputPrice)
{
    this->_price = _InputPrice;
}