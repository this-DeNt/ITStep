#pragma once
#include "framework.h"

typedef unsigned short u_short;

struct BILL
{
    const u_short _nominal;
    size_t _billCount;
};

class BANKOMAT {

    private:

        static size_t _BANKOMAT_COUNT;

        const std::string _Id;
        size_t _currentBSum;

        BILL* _billArr;
        size_t _billArrSize;

        const u_short _minSum;
        const size_t _maxSum;

    public:

        BANKOMAT();
        BANKOMAT(const std::string _IdInput);
        BANKOMAT(const std::string _IdInput, const u_short _InputMin, const size_t _InputMax, const size_t _InputCurrentSum);


};
