#pragma once
#include "framework.h"

class Person {

    private:

        char* _name;
        int _age;

    public:

        Person() = default;
        Person(const char* _InputName, const int _InputAge);

        void print(void) const;
        void input(const int _InputAge, const char* _InputName);
        
        ~Person();
};

class Student: public Person {

    private:

        char* _uni;

    public:

        Student(const int _InputAge, const char* _InputName, const char* _InputUni);

        void print(void) const;

        void input(const char* _InputUni);
        void input();

        ~Student();
};

class Doctor: public Person {

    private:

        size_t _exp;
        bool _fDoctor;
        char* _spec;

    public:

        Doctor(const int _InputAge, const size_t _InputExp, const char* _InputName, const char* _InputSpec, bool _InputFDStatus);

        void printDoctor(void) const;

        void input();
        void input(const char* _InputSpec, bool _InputFDStatus, const size_t _InputExp);

        ~Doctor();
};

class Teacher: public Person {

    private:

        std::string _school;
        size_t _sal;
        std::string _subjects[2];

    public:

        Teacher(const int _InputAge, const char* _InputName, const std::string _InputSchool, const size_t _InputSal, std::string* _InputSubjArr);

        void printTeacher(void) const;

        void input();
        void input(std::string _InputSchool, const size_t _InputSal, std::string* _InputSubjArr);
};

class Driver: public Person {

    private:

        short _carNum;
        size_t _licenseId;
    
    public:

        Driver(const char* _InputName, const int _InputAge, const short _InputCarNum, const size_t _InputLicenseId);

        void printDriver(void) const;

        void input();
        void input(const short _InputCarNum, const size_t _InputLicense);
};