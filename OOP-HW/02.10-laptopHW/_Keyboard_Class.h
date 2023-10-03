#pragma once
#include "framework.h"

class Keyboard {

    private:

        const std::string _name;
        double _price;

    public:

        Keyboard();
        Keyboard(const std::string _InputName, const double _InputPrice);
        Keyboard(Keyboard & _InputKB);

        std::string getName() const;
        double getPrice() const;

        void setPrice(const double _InputPrice);
};