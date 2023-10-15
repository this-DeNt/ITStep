#pragma once

#include <D:/Uni-Prog-Pc/OOP-UNI-PRACTICE/Exam_Financial/.framework/examclassframework.h>
#include <D:/Uni-Prog-Pc/OOP-UNI-PRACTICE/Exam_Financial/.framework/examframework.h>

class FileOut {

    private:

        std::ofstream _out;
        Logs* _logs;

    public:

        FileOut(const Logs _InputLogs);

        void out();
};