#include "_Laptop_Class.h"
#include "_Framework.h"

unsigned int LAPTOP::laptopCount = 0;

LAPTOP::LAPTOP(const LAPTOP &copyLAPTOP)
{
    this->name = new char[strlen(copyLAPTOP.name) + 1];
    strcpy(this->name, copyLAPTOP.name);

    this->price = copyLAPTOP.price;

    this->laptopCPU = copyLAPTOP.laptopCPU;
    this->laptopGPU = copyLAPTOP.laptopGPU;
    this->laptopRAM = copyLAPTOP.laptopRAM;
    this->laptopSSD = copyLAPTOP.laptopSSD;
}

void LAPTOP::printCount()
{
    laptopCount++;
    std::cout << "Count: " << laptopCount << std::endl;
}

void LAPTOP::printSpecs()
{
    std::cout << "Name: " << this->name << std::endl
        << "Price: " << this->price << std::endl
        << "CPU" << std::endl
        << "=============" << std::endl;
            laptopCPU.printCPUSpecs();
    std::cout << "GPU " << std::endl
        << "=============" << std::endl;
            laptopGPU.printGPUSpecs();
    std::cout << "RAM " << std::endl
        << "=============" << std::endl;
            laptopRAM.printRAMSpecs();
    std::cout << "SSD " << std::endl
        << "=============" << std::endl;
            laptopSSD.printSSDSpecs();
}

LAPTOP::~LAPTOP()
{
    delete[] this->name;
}
