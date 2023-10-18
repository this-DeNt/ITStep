#pragma once
#include "_Exception.h"

class ArrSizeException: public ArrException {

    public:

        ArrSizeException(const char* msg):ArrException(msg) {}

        const char* getMsg(void) const {

            return this->_exc_msg;
        }
};