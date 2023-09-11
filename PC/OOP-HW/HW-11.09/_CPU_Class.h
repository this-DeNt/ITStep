#pragma once

class CPU {

private:

    char* CPUName;
    double price;
    int processors;
    int threads;
    double GHz;

public:

    CPU(const char* inputCPUName);

    void setCPUName(const char* inputCPUName);
    void setCPUPrice(double inputCPUPrice);
    void setCPUProcessors(int inputProcessors);
    void setCPUThreads(int inputThreads);
    void setCPUGHz(double inputGHz);

    char* getCPUName();
    double getCPUPrice();
    double getCPUGHz();
    int getCPUProcessors();
    int getCPUThreads();

    ~CPU();
};