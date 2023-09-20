#pragma once

#include "_String_Class.h"
#include "framework.h"

class var {

private:

    int _intVar;
    double _doubleVar;
    myString _stringVar;

public:

    var() = default;
    var(const int _intInput);
    var(const double _doubleInput);

    // @brief String constructor. Doubles as a string copy constructor
    // @param _stringInput constructor receives a copy of the input string
    // @return Initialises string stored **var** object
    var(const myString& _stringInput);

    int getIntVar() const;
    double getDoubleVar() const;
    myString getStringVar() const;

    void setIntVar(const int _intInput);
    void setDoubleVar(const double _doubleInput);
    void setStringVar(const myString& _stringInput);
};

std::ostream& operator<<(std::ostream& os, const var& _inputIntVar);
std::ostream& operator<<(std::ostream& os, const var& _inputDoubleVar);
std::ostream& operator<<(std::ostream& os, const var& _inputStringVar);

std::istream& operator>>(std::istream& is, var _inputVar);