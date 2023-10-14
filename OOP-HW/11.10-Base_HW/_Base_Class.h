#pragma once
#include "_Vehicle_Class.h"
#include "framework.h"

class Base {

    private:

        size_t _fuel;
        size_t _people;
        size_t _goods;
        size_t _vehicle;

        

    public:

        Base() = default;
        Base(size_t _fInput, size_t _pInput, size_t _gInput, size_t _vInput);

        void setGoods(size_t _gInput);
        void setFuel(size_t _fInput);
        void setPeople(size_t _pInput);
        void setVeh();

        size_t getPeople();
        size_t getFuel();
        size_t getGoods();
        size_t getVeh();

};