#pragma once
#include "framework.h"

class Mouse {

    private:

        const std::string _name;
        double _price;

    public:

        Mouse();
        Mouse(const std::string _InputName, const double _InputPrice);
        Mouse(Mouse & _InputMouse);

        std::string getName() const;
        double getPrice() const;

        void setPrice(const double _InputPrice);
};