#include "_Wallet_Class.h"

void Wallet::print()
{
    for (int i = 0; i < _wallet.size(); i++) {

        std::cout << "Card " << i + 1 << std::endl;
        _wallet[i]->print();
        std::cout << "=========" << std::endl;
    }
}

void Wallet::getIdxCard(int Idx)
{
    if (_wallet.size() > Idx || Idx < 0) {

        std::cout << "Invalid Index" << std::endl;

        return;
    }

    for (int i = 0; i < _wallet.size(); i++) {

        if (Idx == i) {

            std::cout << "Card " << i + 1 << std::endl;
            _wallet[i]->print();

            return;
        }
    }
}

void Wallet::getNumberCard(long long _InputNum)
{
    for (int i = 0; i < _wallet.size(); i++) {
    
        if (_wallet[i]->getNumber() == _InputNum) {

            std::cout << "Card " << i + 1 << std::endl;
            _wallet[i]->print();

            return;
        }
    }

    std::cout << "No card found" << std::endl;
}

void Wallet::pushCard(Card *_InputCard)
{
    _wallet.push_back(_InputCard);
}

size_t Wallet::getWalletSize()
{
    return _wallet.size();
}

std::vector<Card *> Wallet::getWallet()
{
    return _wallet;
}
