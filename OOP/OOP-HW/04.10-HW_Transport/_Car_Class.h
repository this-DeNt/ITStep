#pragma once
#include "framework.h"
#include "_Transport_Class.h"

class Car: public Transport {

    protected:

        std::string _carType;

    public:
        
        Car(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed, std::string _InputCarType);

        std::string getCarType(void) const;

        void setCarType(std::string _InputCarType);

        void print(void) const;

        void input(void);
};