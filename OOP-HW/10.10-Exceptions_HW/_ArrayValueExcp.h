#pragma once
#include "_Exception.h"

class ArrValueException: public ArrException {

    int row;
    int col;

    public:

        ArrValueException(const char* msg, int row, int col):ArrException(msg) {

            this->row = row;
            this->col = col;
        }

        const char* getMsg(void) const {

            return this->_exc_msg;
        }
        int getRow() {

            return row;
        }
        int getCol() {

            return col;
        }
};