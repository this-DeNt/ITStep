#pragma once

class ArrException {

protected:

    char _exc_msg[100];

public:

    ArrException(const char* msg);

    virtual const char* getMsg(void) const;
};