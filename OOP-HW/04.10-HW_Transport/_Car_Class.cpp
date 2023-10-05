#include "_Car_Class.h"

Car::Car(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed, std::string _InputCarType):Transport(_InputFuel, _InputManu, _InputPrice, _InputSpeed)
{
    this->_carType = _InputCarType;
}

std::string Car::getCarType(void) const
{
    return this->_carType;
}

void Car::setCarType(std::string _InputCarType)
{
    this->_carType = _InputCarType;
}

void Car::print(void) const
{
    Transport::print();

    std::cout << "Car Type: " << this->getCarType() << std::endl;
}

void Car::input(void)
{
    Transport::input();

    std::string _InputCarType;

    std::cout << "Enter Car Type: ";
    std::cin >> _InputCarType;

    this->setCarType(_InputCarType);
}
