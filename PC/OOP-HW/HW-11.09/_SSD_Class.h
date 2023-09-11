#pragma once

class SSD{

private:

    char* SSDName;
    int memory;
    double uploadSpeed;
    double downloadSpeed;

public:

    SSD(const char* inputSSDName);

    void setSSDName(const char* inputSSDName);
    void setSSDMemory(int inputSSDMemory);
    void setSSDUpSpeed(double inputSSDUpSpeed);
    void setSSDDownSpeed(double inputSSDDownSpeed);

    char* getSSDName();
    int getSSDMemory();
    double getSSDUpSpeed();
    double getSSDDownSpeed();

    ~SSD();
};