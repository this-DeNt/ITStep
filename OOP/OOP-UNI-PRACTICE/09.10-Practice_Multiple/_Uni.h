#pragma once

class Uni {

protected:

    char* _name;
    char* _faculty;

public:

    Uni() = default;
    Uni(const char* _InputName, const char* _InputF);

    void print(void) const;

    void setName(const char* _InputName);
    void setF(const char* _InputF);

    char* getName(void) const;
    char* getF(void) const;

    ~Uni();
};