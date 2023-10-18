#pragma once
#include "framework.h"

class myString {

private:

    char* _str;
    unsigned int _length;
    static unsigned int _stringCount;

public:

    myString();
    myString(const unsigned int userLenInput);
    myString(const char* userStrInput);
    myString(std::initializer_list<char> _InputStr);

    unsigned int myStrLen() const;

    void myStrCpy(const myString& inputStr);

    int myStrCh(const char inputCh) const;

    int myStrCmp(const myString& inputStr) const;

    bool myStrStr(const char* inputStr) const;

    void myStrCat(const myString& inputStr);

    void myDelCh(const char inputChar);

    void printString() const;

    char* getStrPtr() const;
    
    unsigned int getStrLen() const;

    void setStr(const char* inputStr);

    void setLen(const unsigned int inputStrLen);

    static unsigned int getCount();

    void operator +(const myString& inputString);

    void operator=(const myString& inputString);

    void operator ++();

    char& operator[](const unsigned int idx) const;

    void operator()();



    ~myString();
};

myString& operator+(const myString& inputStr, char n);

myString& operator+(char n, const myString& inputStr);

myString& operator+(const unsigned int inputInt, const myString& inputStr);

myString& operator+(const myString& inputStr, const unsigned int inputInt);

myString& operator++(const myString& inputStr);

myString& operator++(const myString& inputStr, int formal);