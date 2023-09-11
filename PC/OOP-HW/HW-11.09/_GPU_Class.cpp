#include "_GPU_Class.h"
#include "_Framework.h"

GPU::GPU()
{
    this->GPUName = nullptr;
    this->price = 0;
    this->memory = 0;
    this->GHz = 0.0;
}

GPU::GPU(const char *inputGPUName):GPU()
{
    this->GPUName = new char[strlen(inputGPUName) + 1];
    strcpy(this->GPUName, inputGPUName);
}

GPU::GPU(const char *inputGPUName, double inputPrice):GPU(inputGPUName)
{
    this->price = inputPrice;
}

GPU::GPU(const char *inputGPUName, double inputPrice, int inputMemory):GPU(inputGPUName, inputPrice)
{
    this->memory = inputMemory;
}

GPU::GPU(const char *inputGPUName, double inputPrice, int inputMemory, double inputGHz):GPU(inputGPUName, inputPrice, inputMemory)
{
    this->GHz = inputGHz;
}

void GPU::setGPUName(const char *inputGPUName)
{
    if (this->GPUName != nullptr) {

        delete[] this->GPUName;
        this->GPUName = nullptr;
    }

    this->GPUName = new char[strlen(inputGPUName) + 1];
    strcpy(this->GPUName, inputGPUName);
}

void GPU::setGPUPrice(double inputGPUPrice)
{
    this->price = inputGPUPrice;
}

void GPU::setGPUMemory(int inputMemory)
{
    this->memory = inputMemory;
}

void GPU::setGPUGHz(double inputGHz)
{
    this->GHz = inputGHz;
}

void GPU::printGPUSpecs()
{
    std::cout << "Name: " << this->GPUName << std::endl
        << "Price: " << this->price << std::endl
        << "Memory: " << this->memory << std::endl
        << "GHz: " << this->GHz << std::endl;
}

char *GPU::getGPUName()
{
    return this->GPUName;
}

double GPU::getGPUPrice()
{
    return this->price;
}

int GPU::getGPUMemory()
{
    return this->memory;
}

double GPU::getGPUGHz()
{
    return this->GHz;
}

GPU::~GPU()
{
    delete[] this->GPUName;
}
