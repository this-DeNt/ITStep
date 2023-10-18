#include "_Transport_Class.h"

Transport::Transport(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed)
{
    this->_fuelType = _InputFuel;
    this->_manufacturer = _InputManu;
    this->_price = _InputPrice;
    this->_speed = _InputSpeed;
}

std::string Transport::getFuelType(void) const
{
    return this->_fuelType;
}

std::string Transport::getManu(void) const
{
    return this->_manufacturer;
}

size_t Transport::getPrice(void) const
{
    return this->_price;
}

double Transport::getSpeed(void) const
{
    return this->_speed;
}

void Transport::setFuelType(std::string _InputFuelType)
{
    this->_fuelType = _InputFuelType;
}

void Transport::setManu(std::string _InputManu)
{
    this->_manufacturer = _InputManu;
}

void Transport::setPrice(size_t _InputPrice)
{
    this->_price = _InputPrice;
}

void Transport::setSpeed(double _InputSpeed)
{
    this->_speed = _InputSpeed;
}

void Transport::input(void)
{
    std::string _InputFuelType, _InputManu;
    size_t _InputPrice;
    double _InputSpeed;

    std::cout << "Enter Fuel Type: ";
    std::cin >> _InputFuelType;

    std::cout << "Enter Manu: ";
    std::cin >> _InputManu;

    std::cout << "Enter Price: ";
    std::cin >> _InputPrice;

    std::cout << "Enter Speed: ";
    std::cin >> _InputSpeed;

    this->setFuelType(_InputFuelType);
    this->setManu(_InputManu);
    this->setPrice(_InputPrice);
    this->setSpeed(_InputSpeed);
}

void Transport::print(void) const
{
    std::cout << "Fuel: " << this->getFuelType() << std::endl << "Manufacturer: " << this->getManu() << std::endl << "Price: " << this->getPrice() << std::endl << "Speed: " << this->getSpeed() << std::endl;
}
