#pragma once
#include "framework.h"
#include "_Transport_Class.h"

class Ship: public Transport {

    protected:

        std::string _shipType;

    public:

        Ship(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed, std::string _InputShipType);

        std::string getShipType(void) const;

        void setShipType(std::string _InputShipType);

        void print(void) const;

        void input(void);
};