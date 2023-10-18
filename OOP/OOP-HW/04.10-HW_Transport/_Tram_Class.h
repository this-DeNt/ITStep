#pragma once
#include "framework.h"
#include "_Transport_Class.h"

class Tram: public Transport {

    protected:

        std::string _tramType;

    public:
        
        Tram(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed, std::string _InputTramType);

        std::string getTramType(void) const;

        void setTramType(std::string _InputTramType);

        void print(void) const;

        void input(void);
};