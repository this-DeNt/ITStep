#pragma once

#include "../.Logs/_Log_Class.h"
#include "../.framework/examframework.h"


class FileOut {

    private:

        std::ofstream _out;
        Logs* _logs;

    public:

        FileOut(const Logs _InputLogs);

        void out();
};