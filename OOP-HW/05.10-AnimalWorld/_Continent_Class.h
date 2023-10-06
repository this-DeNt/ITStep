#pragma once
#include "_Animal_Class.h"

class Continent {

    protected:

        double _medTemp;
        double _area;
        Animal* _herbivor;
        Animal* _carnivor;

    public:

        Continent(const double _InputMedTemp, const double _InputArea, Animal* _InputHerb, Animal* _InputCarn);

        virtual void printContSpecs(void) const = 0;

        double getContMedTemp(void) const;
        double getArea(void) const;

        virtual ~Continent() = 0;
};