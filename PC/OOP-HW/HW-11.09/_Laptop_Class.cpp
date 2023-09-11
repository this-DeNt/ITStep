#include "_Laptop_Class.h"

unsigned int LAPTOP::laptopCount = 0;
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
    laptopCPU.~CPU();
    laptopGPU.~GPU();
    laptopRAM.~RAM();
    laptopSSD.~SSD();
}
