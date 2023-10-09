#pragma once
#include "animalframework.h"

class Lion: public Animal {

    private:

        char* _name;

    public:

        Lion(const double _InputWeight, const double _InputBAlive, const Continent& _InputCont, const char* _InputName);

        void eat(const Animal& _InputAnimal);

        void print(void);

        ~Lion();
};