#include "_CPU_Class.h"
#include "_Framework.h"

CPU::CPU() {

    this->CPUName = nullptr;
    this->price = 0.0;
    this->processors = 0;
    this->threads = 0;
    this->GHz = 0.0;
}

CPU::CPU(const char *inputCPUName):CPU()
{
    this->CPUName = new char[strlen(inputCPUName) + 1];
    strcpy(this->CPUName, inputCPUName);
}

CPU::CPU(const char* inputCPUName, double inputCPUPrice):CPU(inputCPUName) {

    this->price = inputCPUPrice;
}

CPU::CPU(const char* inputCPUName, double inputCPUPrice, int inputCPUProcessors):CPU(inputCPUName, inputCPUPrice) {

    this->processors = inputCPUProcessors;
}

CPU::CPU(const char* inputCPUName, double inputCPUPrice, int inputCPUProcessors, int inputCPUThreads):CPU(inputCPUName, inputCPUPrice, inputCPUProcessors) {

    this->threads = inputCPUThreads;
}

CPU::CPU(const char* inputCPUName, double inputCPUPrice, int inputCPUProcessors, int inputCPUThreads, double inputCPUGHz):CPU(inputCPUName, inputCPUPrice, inputCPUProcessors, inputCPUThreads) {

    this->GHz = inputCPUGHz;
}

CPU::CPU(const CPU &copyCPU)
{
    this->CPUName = new char[strlen(copyCPU.CPUName) + 1];
    strcpy(this->CPUName, copyCPU.CPUName);

    this->price = copyCPU.price;
    this->processors = copyCPU.processors;
    this->threads = copyCPU.threads;
    this->GHz = copyCPU.GHz;
}

void CPU::setCPUName(const char *inputCPUName)
{
    if (this->CPUName != nullptr) {

        delete[] this->CPUName;
        this->CPUName = nullptr;
    }

    this->CPUName = new char[strlen(inputCPUName) + 1];
    strcpy(this->CPUName, inputCPUName);
}

void CPU::setCPUPrice(double inputCPUPrice)
{
    this->price = inputCPUPrice;
}

void CPU::setCPUProcessors(int inputProcessors)
{
    this->processors = inputProcessors;
}

void CPU::setCPUThreads(int inputThreads)
{
    this->threads = inputThreads;
}

void CPU::setCPUGHz(double inputGHz)
{
    this->GHz = inputGHz;
}

char *CPU::getCPUName()
{
    return this->CPUName;
}

double CPU::getCPUPrice()
{
    return this->price;
}

double CPU::getCPUGHz()
{
    return this->GHz;
}

int CPU::getCPUProcessors()
{
    return this->processors;
}

int CPU::getCPUThreads()
{
    return this->threads;
}

void CPU::printCPUSpecs() {

    std::cout << "Name: " << this->CPUName << std::endl
        << "Price: " << this->price << std::endl
        << "GHz: " << this->GHz << std::endl
        << "Proccessors: " << this->processors << std::endl
        << "Threads: " << this->threads << std::endl;
}

CPU::~CPU()
{
    delete[] this->CPUName;
}
