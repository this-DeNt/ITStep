#pragma once

#include "../.framework/examframework.h"
#include "../.card/_Card.h"
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