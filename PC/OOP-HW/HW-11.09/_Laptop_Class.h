#pragma once
#include "_Class_Framework.h"
#include "_Framework.h"

class LAPTOP {

private:

    char* name;
    double price;
    static unsigned int laptopCount;
    CPU laptopCPU;
    GPU laptopGPU;
    RAM laptopRAM;
    SSD laptopSSD;

public:

    LAPTOP(const char* laptopName, const char* CPUName, double CPUPrice, int CPUProc, int CPUThreads, double CPUGHz, 
            const char* GPUName, double GPUPrice, int GPUMemory, double GPUGHz, 
            const char* RAMName, const char* RAMSocket, double RAMPrice, int RAMMemory,
            const char* SSDName, int SSDMemory, double SSDUpSpeed, double SSDDownSpeed):laptopCPU(CPUName, CPUPrice, CPUProc, CPUThreads, CPUGHz),
            laptopGPU(GPUName, GPUPrice, GPUMemory, GPUGHz),
            laptopRAM(RAMName, RAMSocket, RAMPrice, RAMMemory),
            laptopSSD(SSDName, SSDMemory, SSDUpSpeed, SSDDownSpeed) {

                this->name = new char[strlen(laptopName) + 1];
                strcpy(this->name, laptopName);

                this->price = laptopCPU.getCPUPrice() + laptopGPU.getGPUPrice() + laptopRAM.getRAMPrice();
            }

    static void printCount();
    void printSpecs();
    ~LAPTOP();
};