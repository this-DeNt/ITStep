#pragma once
#include "framework.h"

class TouchPad {

    private:

        const std::string _name;
        double _price;

    public:

        TouchPad();
        TouchPad(const std::string _InputName, const double _InputPrice);
        TouchPad(TouchPad & _InputTouchPad);

        std::string getName() const;
        double getPrice() const;

        void setPrice(const double _InputPrice);
};