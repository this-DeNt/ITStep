#pragma once

class SSD{

private:

    char* SSDName;
    int memory;
    double uploadSpeed;
    double downloadSpeed;

public:

    SSD();
    SSD(const char* inputSSDName);
    SSD(const char* inputSSDName, int inputSSDMemory);
    SSD(const char* inputSSDName, int inputSSDMemory, double inputSSDUpSpeed);
    SSD(const char* inputSSDName, int inputSSDMemory, double inputSSDUpSpeed, double inputSSDDownSpeed);
    SSD(const SSD & copySSD);

    void setSSDName(const char* inputSSDName);
    void setSSDMemory(int inputSSDMemory);
    void setSSDUpSpeed(double inputSSDUpSpeed);
    void setSSDDownSpeed(double inputSSDDownSpeed);

    void printSSDSpecs();

    char* getSSDName();
    int getSSDMemory();
    double getSSDUpSpeed();
    double getSSDDownSpeed();

    ~SSD();
};