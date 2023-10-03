#pragma once
#include "framework.h"

<<<<<<< HEAD
template<class varType>
=======
template <class varType>
>>>>>>> c0efaa645c9f470f0f0acefd878f01648b456c46
class var {

private:

<<<<<<< HEAD
    varType _variable;
=======
    varType _var;
>>>>>>> c0efaa645c9f470f0f0acefd878f01648b456c46

public:

    var();
    var(const varType _Input);
<<<<<<< HEAD

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
=======
    var(const var& _InputVar);
    var(const var&& _InputVar);

    var& operator=(const var&& _InputVar);
    var& operator=(const var& _InputVar);

    var& operator+(const var& _InputVar);
    var& operator-(const var& _InputVar);
    var& operator*(const var& _InputVar);
    var& operator/(const var& _InputVar);
    var& operator+=(const var& _InputVar);
    var& operator-=(const var& _InputVar);
    var& operator*=(const var& _InputVar);
    var& operator/=(const var& _InputVar);

    bool operator<(const var& _InputVar);
    bool operator>(const var& _InputVar);
    bool operator<=(const var& _InputVar);
    bool operator>=(const var& _InputVar);
    bool operator==(const var& _InputVar);
    bool operator!=(const var& _InputVar);

    void print() const;

};

template<class varType>
inline void var<varType>::print() const
{
    std::cout << this->_var;
}

template <class varType>
inline var<varType>::var()
{
    this->_var = 0;
}

template <class varType>
inline var<varType>::var(const varType _Input)
{
    this->_var = _Input;
}

template <class varType>
inline var<varType>::var(const var &_InputVar)
{
    this->_var = _InputVar._var;
}

template <class varType>
inline var<varType>::var(const var &&_InputVar)
{
    this->_var = _InputVar._var;
    _InputVar._var = 0;
}

template <class varType>
inline var<varType> &var<varType>::operator=(const var &&_InputVar)
{
    this->_var = _InputVar._var;
    _InputVar._var = 0;

    return *this;
}

template <class varType>
inline var<varType> &var<varType>::operator=(const var &_InputVar)
{
    this->_var = _InputVar._var;

    return *this;
}

template <class varType>
inline var<varType> &var<varType>::operator+(const var &_InputVar)
{
    var<varType> temp;
    temp._var = this->_var + _InputVar._var;

    return temp;
}

template <class varType>
inline var<varType> &var<varType>::operator-(const var &_InputVar)
{
    var<varType> temp;
    temp._var = this->_var - _InputVar._var;

    return temp;
}

template <class varType>
inline var<varType> &var<varType>::operator*(const var &_InputVar)
{
    var<varType> temp;
    temp._var = this->_var * _InputVar._var;

    return temp;
}

template <class varType>
inline var<varType> &var<varType>::operator/(const var &_InputVar)
{
    var<varType> temp;
    temp._var = this->_var / _InputVar._var;

    return temp;
}

template <class varType>
inline var<varType> &var<varType>::operator+=(const var &_InputVar)
{
    this->_var += _InputVar._var;

    return *this;
}

template <class varType>
inline var<varType> &var<varType>::operator-=(const var &_InputVar)
{
    this->_var -= _InputVar._var;

    return *this;
}

template <class varType>
inline var<varType> &var<varType>::operator*=(const var &_InputVar)
{
    this->_var *= _InputVar._var;

    return *this;
}

template <class varType>
inline var<varType> &var<varType>::operator/=(const var &_InputVar)
{
    this->_var /= _InputVar._var;

    return *this;
}

template <class varType>
inline bool var<varType>::operator<(const var &_InputVar)
{
    if (this->_var < _InputVar._var) {

        return true;
    }
    
    return false;
}

template <class varType>
inline bool var<varType>::operator>(const var &_InputVar)
{
    if (this->_var > _InputVar._var) {

        return true;
    }
    
    return false;
}

template <class varType>
inline bool var<varType>::operator<=(const var &_InputVar)
{
    if (this->_var <= _InputVar._var) {

        return true;
    }
    
    return false;
}

template <class varType>
inline bool var<varType>::operator>=(const var &_InputVar)
{
    if (this->_var >= _InputVar._var) {

        return true;
    }
    
    return false;
}

template <class varType>
inline bool var<varType>::operator==(const var &_InputVar)
{
    if (this->_var == _InputVar._var) {

        return true;
    }
    
    return false;
}

template <class varType>
inline bool var<varType>::operator!=(const var &_InputVar)
{
    if (this->_var != _InputVar._var) {

        return true;
    }
    
    return false;
}
>>>>>>> c0efaa645c9f470f0f0acefd878f01648b456c46
