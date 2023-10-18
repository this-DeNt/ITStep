#include "_Person_Class.h"
#include "framework.h"

Person::Person(const char *_InputName, const int _InputAge):_age(_InputAge)
{
    this->_name = new char[strnlen_s(_InputName, sizeof(_InputName)) + 1];
    strcpy_s(this->_name, strnlen_s(_InputName, sizeof(_InputName)) + 1, _InputName);
}

void Person::print(void) const
{
    std::cout << this->_name << std::endl << this->_age << std::endl;
}

void Person::input(const int _InputAge, const char *_InputName)
{
    this->_age = _InputAge;

    this->_name = new char[strnlen_s(_InputName, sizeof(_InputName)) + 1];
    strcpy_s(this->_name, strnlen_s(_InputName, sizeof(_InputName)) + 1, _InputName);
}

Person::~Person()
{
    delete[] this->_name;
}

Student::Student(const int _InputAge, const char *_InputName, const char *_InputUni):Person(_InputName, _InputAge)
{
    this->_uni = new char[strnlen_s(_InputUni, sizeof(_InputUni)) + 1];
    strcpy_s(this->_uni, strnlen_s(_InputUni, sizeof(_InputUni)) + 1, _InputUni);
}

void Student::print(void) const
{
    Person::print();

    std::cout << this->_uni << std::endl;
}

void Student::input(const char *_InputUni)
{
    this->_uni = new char[strnlen_s(_InputUni, sizeof(_InputUni)) + 1];
    strcpy_s(this->_uni, strnlen_s(_InputUni, sizeof(_InputUni)) + 1, _InputUni);

    Person::input(9, "Oleg");
}

void Student::input()
{
    Person::input(10, "Oleg");
}

Student::~Student()
{
    delete[] this->_uni;
}

Doctor::Doctor(const int _InputAge, const size_t _InputExp, const char *_InputName, const char *_InputSpec, bool _InputFDStatus):Person(_InputName, _InputAge)
{
    this->_exp = _InputExp;
    
    this->_spec = new char[strnlen_s(_InputSpec, sizeof(_InputSpec)) + 1];
    strcpy_s(this->_spec, strnlen_s(_InputSpec, sizeof(_InputSpec)) + 1, _InputSpec);

    this->_fDoctor = _InputFDStatus;
}

void Doctor::printDoctor(void) const
{
    Person::print();

    std::cout << this->_exp << std::endl << this->_spec << std::endl << ((this->_fDoctor) ? ("is A Family Doctor") : ("Not a Family Doctor")) << std::endl;
}

void Doctor::input()
{
    Person::input(12, "Serega");
}

void Doctor::input(const char *_InputSpec, bool _InputFDStatus, const size_t _InputExp)
{
    if (nullptr != this->_spec) {

        delete[] this->_spec;
        this->_spec = nullptr;
    }

    this->_spec = new char[strnlen_s(_InputSpec, sizeof(_InputSpec)) + 1];
    strcpy_s(this->_spec, strnlen_s(_InputSpec, sizeof(_InputSpec)) + 1, _InputSpec);

    this->_fDoctor = _InputFDStatus;
    this->_exp = _InputExp;

    Person::input(12, "Serega");
}

Doctor::~Doctor()
{
    delete[] this->_spec;
}

Driver::Driver(const char *_InputName, const int _InputAge, const short _InputCarNum, const size_t _InputLicenseId):Person(_InputName, _InputAge)
{
    this->_carNum = _InputCarNum;
    this->_licenseId = _InputLicenseId;
}

void Driver::printDriver(void) const
{
    Person::print();

    std::cout << this->_carNum << std::endl << this->_licenseId << std::endl;
}

void Driver::input()
{
    Person::input(95, "Dima");
}

void Driver::input(const short _InputCarNum, const size_t _InputLicense)
{
    this->_carNum = _InputCarNum;
    this->_licenseId = _InputLicense;

    Person::input(95, "Dima");
}

Teacher::Teacher(const int _InputAge, const char *_InputName, const std::string _InputSchool, const size_t _InputSal, std::string *_InputSubjArr):Person(_InputName, _InputAge)
{
    this->_school = _InputSchool;
    this->_sal = _InputSal;

    _subjects = _InputSubjArr[sizeof(_InputSubjArr)];
}

void Teacher::printTeacher(void) const
{
    Person::print();

    std::cout << this->_school << std::endl << this->_sal << std::endl;

    for (int i = 0; i < sizeof(this->_subjects); ++i) {

        std::cout << _subjects[i] << std::endl;
    }
}

void Teacher::input()
{
    Person::input(8, "Max");
}

void Teacher::input(std::string _InputSchool, const size_t _InputSal, std::string *_InputSubjArr)
{
    this->_school = _InputSchool;
    this->_sal = _InputSal;

    _subjects = _InputSubjArr[sizeof(_InputSubjArr)];

    Person::input(9, "Max");
}
