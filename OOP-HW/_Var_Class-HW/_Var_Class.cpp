#include "framework.h"
#include "_Var_Class.h"

var::var(const int _intInput):_stringVar(nullptr), _doubleVar(0.0)
{
    this->_intVar = _intInput;
}

var::var(const double _doubleInput):_stringVar(nullptr), _intVar(0)
{
    this->_doubleVar = _doubleInput;
}

var::var(const myString &_stringInput)
{
    this->_stringVar.myStrCpy(_stringInput);
}

int var::getIntVar() const
{
    return this->_intVar;
}

double var::getDoubleVar() const
{
    return this->_doubleVar;
}

myString var::getStringVar() const
{
    return this->_stringVar.getStrPtr();
}

std::ostream &operator<<(std::ostream &os, const var &_inputIntVar)
{
    os << _inputIntVar.getIntVar();

    return os;
}

std::ostream &operator<<(std::ostream &os, const var &_inputDoubleVar)
{
    os << _inputDoubleVar.getDoubleVar();

    return os;
}

std::ostream &operator<<(std::ostream &os, const var &_inputStringVar)
{
    os << _inputStringVar.getStringVar();

    return os;
}
