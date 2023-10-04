#pragma once
#include "framework.h"
#include "_Transport_Class.h"

class Train: public Transport {

    protected:

        std::string _trainType;

    public:
        
        Train(std::string _InputFuel, std::string _InputManu, size_t _InputPrice, double _InputSpeed, std::string _InputTrainType);

        std::string getTrainType(void) const;

        void setTrainType(std::string _InputTrainType);

        void print(void) const;

        void input(void);
};