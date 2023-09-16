#pragma once
#include <iostream>

class myString {

private:

    char* _str;
    unsigned int _length;
    static unsigned int _stringCount;

public:

    myString();
    myString(const unsigned int userLenInput);
    myString(const char* userStrInput);

    unsigned int myStrLen() const;

    void myStrCpy(const myString& inputStr);

    int myStrCh(const char inputCh) const;

    int myStrCmp(const myString& inputStr) const;

    bool myStrStr(const char* inputStr) const;

    void myStrCat(const myString& inputStr);

    void printString() const;

    char* getStrPtr() const;
    
    unsigned int getStrLen() const;

    static unsigned int getCount();

    void operator +(const myString& inputString);
    myString operator+(const myString& inputString) const;

    void operator=(const myString& inputString);
    myString operator=(const myString& inputString) const;

    ~myString();
};