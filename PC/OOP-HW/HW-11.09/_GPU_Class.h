#pragma once

class GPU {

private:

    char* GPUName;
    double price;
    int memory;
    double GHz;

public:

    GPU(const char* inputGPUName);

    void setGPUName(const char* inputGPUName);
    void setGPUPrice(double inputGPUPrice);
    void setGPUMemory(int inputMemory);
    void setGPUGHz(double inputGHz);

    char* getGPUName();
    double getGPUPrice();
    int getGPUMemory();
    double getGPUGHz();

    ~GPU();
};