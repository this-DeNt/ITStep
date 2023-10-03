#pragma once
#include "framework.h"

class FlashDrive {

    private:

        const std::string _name;
        double _price;
        const double _capacity;
    
    public:

        FlashDrive();
        FlashDrive(const std::string _InputName, const double _InputCapacity, const double _InputPrice);
        FlashDrive(FlashDrive& _InputFlash);

        std::string getName() const;
        double getCapacity() const;
        double getPrice() const;

        void setPrice(const double _InputPrice);
};