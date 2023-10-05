#pragma once
#include "continentframework.h"

class Afrika: public Continent {

    private:

        char* _name;

    public:

        Afrika(const double _InputMedTemp, const double _InputArea, const Animal& _InputHerb, const Animal& _InputCarn, const char* _InputName);

        void printContSpecs(void) const;
        char* getContName(void) const;

        ~Afrika();
};