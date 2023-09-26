#pragma once
#include "framework.h"

typedef unsigned short u_short;

struct BILL
{
    u_short _nominal;
    size_t _billCount;
};


class BANKOMAT {

    private:
    
        static size_t _bankomatCount;

        const std::string _ID;
        size_t _CurrentBSum;

        BILL* _billArr;
        size_t _billArrSize;

    public:

        BANKOMAT();
        BANKOMAT(const std::string _InputID);
        BANKOMAT(const std::string _InputID, const size_t _InputBSum);
        BANKOMAT(const std::string _InputID, const size_t _InputBSum, const size_t _InputBillArrSize);
        BANKOMAT(const std::string _InputID, const BANKOMAT& _InputB);
        BANKOMAT(const BANKOMAT& _InputB);
        BANKOMAT(const BANKOMAT && _InputB);
};