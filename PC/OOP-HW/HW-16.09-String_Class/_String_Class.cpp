#include "_String_Class.h"
#include "_Framework.h"

unsigned int myString::_stringCount = 0;

myString::myString()
{
    this->_str = nullptr;
    this->_length = 80 + 1; // +1 = "\0"

    ++_stringCount;
}

myString::myString(const unsigned int userLenInput)
{
    this->_str = nullptr;
    this->_length = userLenInput + 1; // +1 = "\0"

    ++_stringCount;
}

myString::myString(const char *userStrInput)
{
    int tempStrLen = 0;

    for (int i = 0; userStrInput[i] != '\0'; ++i) {

        ++tempStrLen;
    }

    this->_length = tempStrLen;
    this->_str = new char[_length + 1];

    for (int i = 0; i <_length; ++i) {

        this->_str[i] = userStrInput[i];
    }

    ++_stringCount;
}

unsigned int myString::myStrLen() const
{
    unsigned int tempStrLen = 0;

    while(this->_str[tempStrLen] != '\0') {

        ++tempStrLen;
    }

    return tempStrLen;
}

void myString::myStrCpy(const myString &inputStr)
{
    if (this->_str != nullptr) {

        delete[] this->_str;
        this->_str = nullptr;
    }

    this->_length = inputStr.myStrLen();
    this->_str = new char[_length + 1];

    for (int i = 0; i < this->_length; ++i) {

        this->_str[i] = inputStr._str[i];
    }
}

int myString::myStrCh(const char inputCh) const
{
    for (int i = 0; i < this->_length; ++i) {

        if (this->_str[i] == inputCh) {

            return i;
        }
    }

    return -1;
}

int myString::myStrCmp(const myString &inputStr) const
{
    for (int i = 0; i < this->_length; ++i) {

        if (this->_str[i] < inputStr._str[i]) {

            return -1;
        }

        if (this->_str[i] > inputStr._str[i]) {

            return 1;
        }
    }

    return 0;
}

bool myString::myStrStr(const char *inputStr) const
{
    unsigned int tempStrLen = 0;

    for (int i = 0; inputStr[i] != '\0'; ++i) {

        ++tempStrLen;
    }

    if (this->_length <= tempStrLen) {

        return false;
    }

    for (int i = 0; i < this->_length; ++i) {

        for (int j = i; j < tempStrLen; ++j) {

            if (this->_str[j] != inputStr[j]) {

                break;
            }

            return true;
        }
    }

    return false;
}

void myString::myStrCat(const myString &inputStr)
{
    myString tempString;

    tempString._length = this->myStrLen() + inputStr.myStrLen();
    tempString._str = new char[tempString._length + 1];

    for (int i = 0; i < this->_length; ++i) {

        tempString._str[i] = this->_str[i];
    }

    for (int j = this->_length; j < tempString._length; ++j) {

        tempString._str[j] = inputStr._str[j - this->_length];
    }

    this->myStrCpy(tempString);
}

void myString::printString() const
{
    for (int i = 0; i < this->_length; ++i) {

        std::cout << this->_str[i];
    }
}

void myString::myDelCh(const char inputChar)
{
    unsigned int tempStrLen = this->_length;
    char* tempStr = new char[tempStrLen + 1];

    unsigned int j = 0;

    for (int i = 0; i < tempStrLen; ++i) {

        if (this->_str[i] != inputChar) {

            tempStr[j] = this->_str[i];
            ++j;        
        }
    }

    tempStr[j] = '\0';

    delete[] this->_str;
    this->_str = tempStr;
    this->_length = this->myStrLen();

}

char *myString::getStrPtr() const
{
    return this->_str;
}

unsigned int myString::getStrLen() const
{
    return this->_length;
}

unsigned int myString::getCount()
{
    return _stringCount;
}

myString::~myString()
{
    delete[] this->_str;
}

void myString::operator+(const myString &inputString)
{
    this->myStrCat(inputString);
}

void myString::operator=(const myString& inputString)
{
    this->myStrCpy(inputString);
}

void myString::operator++()
{
    ++this->_length;
    this->_str[this->_length] = '\0';
}
