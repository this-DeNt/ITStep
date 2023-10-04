#pragma once
#include "framework.h"
#include "_Transport_Class.h"

class Plane: public Transport {

    protected:

        std::string _planeType;

    public:
        
        Plane(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed, std::string _InputPlaneType);

        std::string getPlaneType(void) const;

        void setPlaneType(std::string _InputPlaneType);

        void print(void) const;

        void input(void);
};