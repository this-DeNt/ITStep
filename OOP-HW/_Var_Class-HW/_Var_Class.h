#pragma once
#include "framework.h"

template<class varType>
class var {

private:

    varType _variable;

public:

    var();
    var(const varType _Input);

    void operator+(const varType _Input);
    var& operator+(const varType& _Input);

    void operator-(const varType _Input);
    var& operator-(const varType& _Input);

    void operator*(const varType _Input);
    var& operator*(const varType& _Input);

    void operator/(const varType _Input);
    var& operator/(const varType& _Input);
};

template <class varType>
inline var<varType>::var()
{
    this->_variable = 0;
}

template <class varType>
inline var<varType>::var(const varType _Input)
{
    this->_variable = _Input;
}

template <class varType>
inline void var<varType>::operator+(const varType _Input)
{
    this->_variable += _Input;
}

template <class varType>
inline var<varType> &var<varType>::operator+(const varType &_Input)
{
    this->_variable += _Input;
    return *this;
}