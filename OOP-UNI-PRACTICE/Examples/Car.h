#pragma once
    
class Car
{

    char* model;
    int year;
   

public:

    Car();
    Car(const char* m,  int y);
    ~Car();
    void Input();
    void Print();

};

