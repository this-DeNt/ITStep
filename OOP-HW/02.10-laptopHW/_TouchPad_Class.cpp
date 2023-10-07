#include "_TouchPad_Class.h"

TouchPad::TouchPad():_name(nullptr)
{
    this->_price = 0;
}

TouchPad::TouchPad(const std::string _InputName, const double _InputPrice):_name(_InputName)
{
    this->_price = _InputPrice;
}

TouchPad::TouchPad(TouchPad &_InputTouchPad):_name(_InputTouchPad._name)
{
    this->_price = _InputTouchPad._price;
}

std::string TouchPad::getName() const
{
    return this->_name;
}

double TouchPad::getPrice() const
{
    return this->_price;
}

void TouchPad::setPrice(const double _InputPrice)
{
    this->_price = _InputPrice;
}