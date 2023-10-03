#include "_FlashDrive_Class.h"
#include "framework.h"

FlashDrive::FlashDrive():_name(nullptr), _capacity(0.0)
{
    this->_price = 0.0;
}

FlashDrive::FlashDrive(const std::string _InputName, const double _InputPrice, const double _InputCapacity):_name(_InputName), _capacity(_InputCapacity)
{
    this->_price = _InputPrice;
}

FlashDrive::FlashDrive(FlashDrive &_InputFlashDrive):_name(_InputFlashDrive._name), _capacity(_InputFlashDrive._capacity)
{
    this->_price = _InputFlashDrive._price;
}

std::string FlashDrive::getName() const
{
    return this->_name;
}

double FlashDrive::getPrice() const
{
    return this->_price;
}

double FlashDrive::getCapacity() const
{
    return _capacity;
}

void FlashDrive::setPrice(const double _InputPrice)
{
    this->_price = _InputPrice;
}
