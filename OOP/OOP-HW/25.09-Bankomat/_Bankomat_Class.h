#pragma once
#include "framework.h"

typedef unsigned short u_short;

struct BILL
{
<<<<<<< HEAD
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
=======
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
>>>>>>> c0efaa645c9f470f0f0acefd878f01648b456c46
