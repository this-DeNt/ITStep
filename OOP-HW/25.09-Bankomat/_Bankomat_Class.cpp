#include "_Bankomat_Class.h"
#include "framework.h"

size_t BANKOMAT::_bankomatCount = 0;

BANKOMAT::BANKOMAT():_ID(nullptr)
{
    this->_CurrentBSum = 0;
    this->_billArr = nullptr;
    this->_billArrSize = 0;
}

BANKOMAT::BANKOMAT(const std::string _InputID):_ID(_InputID)
{
    this->_CurrentBSum = 0;
    this->_billArr = nullptr;
    this->_billArrSize = 0;
}

BANKOMAT::BANKOMAT(const std::string _InputID, const size_t _InputBSum):_ID(_InputID)
{
    this->_CurrentBSum = _InputBSum;

    this->_billArr = nullptr;
    this->_billArrSize = 0;
}

BANKOMAT::BANKOMAT(const std::string _InputID, const size_t _InputBSum, const size_t _InputBillArrSize):_ID(_InputID)
{
    this->_CurrentBSum = _InputBSum;

    this->_billArrSize = _InputBillArrSize;
    this->_billArr = new BILL[this->_billArrSize];
}

BANKOMAT::BANKOMAT(const std::string _InputID, const BANKOMAT &_InputB):_ID(_InputID)
{
    this->_CurrentBSum = _InputB._CurrentBSum;
    this->_billArrSize = _InputB._billArrSize;
    this->_billArr = new BILL[this->_billArrSize];

    for (int i = 0; i < this->_billArrSize; ++i) {

        this->_billArr[i] = _InputB._billArr[i];
    }
}

BANKOMAT::BANKOMAT(const BANKOMAT &_InputB):_ID(_InputB._ID)
{
    this->_CurrentBSum = _InputB._CurrentBSum;
    this->_billArrSize = _InputB._billArrSize;
    this->_billArr = new BILL[this->_billArrSize];

    for (int i = 0; i < this->_billArrSize; ++i) {

        this->_billArr[i] = _InputB._billArr[i];
    }
}

BANKOMAT::BANKOMAT(const BANKOMAT &&_InputB):_ID(_InputB._ID)
{
    
}
