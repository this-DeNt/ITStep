#pragma once
#include "framework.h"

class GPU {

    private:

        const std::string _name;
        double _price;
        double _memory;
    
    public:

        GPU();
        GPU(const std::string _InputName, const double _InputPrice, const double _InputMemory);
        GPU(GPU & _InputGPU);

        std::string getName() const;
        double getPrice() const;
        double getMemory() const;

        void setPrice(const double _InputPrice);
        void setMemory(const double _InputMemory);
};