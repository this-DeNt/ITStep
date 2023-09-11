#pragma once

class CPU {

private:

    char* CPUName;
    double price;
    int processors;
    int threads;
    double GHz;

public:

    CPU();
    CPU(const char* inputCPUName);
    CPU(const char* inputCPUName, double inputCPUPrice);
    CPU(const char* inputCPUName, double inputCPUPrice, int inputCPUProcessors);
    CPU(const char* inputCPUName, double inputCPUPrice, int inputCPUProcessors, int inputCPUThreads);
    CPU(const char* inputCPUName, double inputCPUPrice, int inputCPUProcessors, int inputCPUThreads, double inputCPUGHz);

    void setCPUName(const char* inputCPUName);
    void setCPUPrice(double inputCPUPrice);
    void setCPUProcessors(int inputProcessors);
    void setCPUThreads(int inputThreads);
    void setCPUGHz(double inputGHz);

    void printCPUSpecs();

    char* getCPUName();
    double getCPUPrice();
    double getCPUGHz();
    int getCPUProcessors();
    int getCPUThreads();

    ~CPU();
};