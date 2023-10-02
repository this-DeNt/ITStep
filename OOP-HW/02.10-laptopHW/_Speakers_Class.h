#pragma once
#include "framework.h"

class Speakers {

    private:

        const std::string _name;
        double _price;

    public:

        Speakers();
        Speakers(const std::string _InputName, const double _InputPrice);
        Speakers(Speakers & _InputSpeaker);

        std::string getName() const;
        double getPrice() const;

        void setPrice(const double _InputPrice);
};