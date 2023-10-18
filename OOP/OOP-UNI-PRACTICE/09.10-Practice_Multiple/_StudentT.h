#pragma once
#include "_Uni.h"
#include "_Human.h"

class StudentT: public Uni, public Human {

    private:

        char* _group;

    public:

        StudentT() = default;
        StudentT(const char* _hName, const char* _uName, const char* _fName, int _A, const char* _G);

        void print();

        void setGroup(const char* _InputGroup);

        char* getGroup() const;

        ~StudentT();
};