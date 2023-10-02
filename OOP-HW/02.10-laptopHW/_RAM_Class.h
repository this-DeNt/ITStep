#pragma once
#include "framework.h"

class RAM {

    private:

        const std::string _name;
        const double _memory;
        double _price;

    public:

        RAM();
        RAM(const std::string _InputName, const double _InputPrice, const double _Inputmemory);
        RAM(RAM & _InputRAM);

        std::string getName() const;
        double getPrice() const;
        double getmemory() const;

        void setPrice(const double _InputPrice);
};