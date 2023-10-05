#pragma once
#include "framework.h"

class Transport {

    protected:

        std::string _fuelType;
        std::string _manufacturer;
        size_t _price;
        double _speed;
    
    public:

        Transport() = default;
        Transport(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed);

        std::string getFuelType(void) const;
        std::string getManu(void) const;
        size_t getPrice(void) const;
        double getSpeed(void) const;

        void setFuelType(std::string _InputFuelType);
        void setManu(std::string _InputManu);
        void setPrice(size_t _InputPrice);
        void setSpeed(double _InputSpeed);

        virtual void input(void);

        virtual void print(void) const;

};