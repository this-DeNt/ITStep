#include "_Train_Class.h"

Train::Train(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed, std::string _InputTrainType):Transport(_InputFuel, _InputManu, _InputPrice, _InputSpeed)
{
    this->_trainType = _InputTrainType;
}

std::string Train::getTrainType(void) const
{
    return this->_trainType;
}

void Train::setTrainType(std::string _InputTrainType)
{
    this->_trainType = _InputTrainType;
}

void Train::print(void) const
{
    Transport::print();

    std::cout << "Train Type: " << this->getTrainType() << std::endl;
}

void Train::input(void)
{
    Transport::input();

    std::string _InputTrainType;

    std::cout << "Enter Train Type: ";
    std::cin >> _InputTrainType;

    this->setTrainType(_InputTrainType);
}
