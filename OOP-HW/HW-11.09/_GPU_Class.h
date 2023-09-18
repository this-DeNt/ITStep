#pragma once

class GPU {

private:

    char* GPUName;
    double price;
    int memory;
    double GHz;

public:

    GPU();
    GPU(const char* inputGPUName);
    GPU(const char* inputGPUName, double inputPrice);
    GPU(const char* inputGPUName, double inputPrice, int inputMemory);
    GPU(const char* inputGPUName, double inputPrice, int inputMemory, double inputGHz);
    GPU(const GPU & copyGPU);

    void setGPUName(const char* inputGPUName);
    void setGPUPrice(double inputGPUPrice);
    void setGPUMemory(int inputMemory);
    void setGPUGHz(double inputGHz);

    void printGPUSpecs();

    char* getGPUName();
    double getGPUPrice();
    int getGPUMemory();
    double getGPUGHz();

    ~GPU();
};