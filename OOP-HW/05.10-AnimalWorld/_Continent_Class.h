#pragma once
#include "animalframework.h"

class Continent {

    protected:

        double _medTemp;
        double _area;
        Animal* _herbivor;
        Animal* _carnivor;

    public:

        Continent(const double _InputMedTemp, const double _InputArea, const Animal& _InputHerb, const Animal& _InputCarn);

        virtual void printContSpecs(void) const = 0;

        char* getContName(void) const;
        double getContMedTemp(void) const;
        double getArea(void) const;

        virtual ~Continent() = 0;
};