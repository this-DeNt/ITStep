#pragma once

class Human {

protected:

    char* _name;
    int _age;

public:

    Human() = default;
    Human(const char* _InputName, const int _InputAge);

    void print(void) const;

    void input(void);

    void setName(const char* _InputName);
    void setAge(const int _InputAge);

    int getAge(void) const;
    char* getName(void) const;

    ~Human();
};