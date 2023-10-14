#pragma once

#include <D:/Uni-Prog-Pc/OOP-UNI-PRACTICE/Exam_Financial/.card/_Card.h>

#ifdef LAPTOP
#include "C:\Uni-Prog-Lap\OOP-UNI-PRACTICE\Exam_Financial\.framework\examframework.h"
#else
#include "D:\Uni-Prog-Pc\OOP-UNI-PRACTICE\Exam_Financial\.framework\examframework.h"
#endif

class Wallet {

private:

    std::vector<Card*> _wallet;

public:

    Wallet() = default;

    void print();
    void getIdxCard(int Idx);
    void getNumberCard(long long _InputNum);

    void pushCard(Card* _InputCard);
    size_t getWalletSize();
    std::vector<Card*> getWallet();

};  