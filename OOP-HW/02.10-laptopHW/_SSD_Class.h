#pragma once
#include "framework.h"

class SSD {

    private:

        const std::string _name;
        const double _capacity;
        double _price;

    public:

        SSD();
        SSD(const std::string _InputName, const double _InputPrice, const double _InputCapacity);
        SSD(SSD & _InputSSD);

        std::string getName() const;
        double getPrice() const;
        double getCapacity() const;

        void setPrice(const double _InputPrice);
};