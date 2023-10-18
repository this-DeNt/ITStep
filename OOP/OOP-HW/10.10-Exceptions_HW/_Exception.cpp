#include "_Exception.h"
#include <cstring>
#include <string>

ArrException::ArrException(const char *msg)
{
    strcpy(this->_exc_msg, msg);
}
const char* ArrException::getMsg(void) const
{
    return _exc_msg;
}