#pragma once
#include "continentframework.h"

class Animal {

    protected:

        double _weight;
        bool _alive;
        Continent* _continent;

    public:

        Animal(const double _InputWeight, const double _InputBAlive, const Continent& _InputCont);

        virtual void eat(void) = 0;

        bool isAlive(void) const;
        double getWeight(void) const;

        virtual void print(void) = 0;

        virtual ~Animal() = 0;
};