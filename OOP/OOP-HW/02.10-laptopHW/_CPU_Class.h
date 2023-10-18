#pragma once
#include "framework.h"

class CPU {

    private:
        
        const std::string _name;
        double _price;
        double _GHz;

    public:

        CPU();
        CPU(const std::string _InputName, const double _InputPrice, const double _InputGHz);
        CPU(CPU & _InputCPU);

        std::string getName() const;
        double getPrice() const;
        double getGHz();

        void setPrice(const double _InputPrice);
        void setGHz(const double _InputGHz);
};