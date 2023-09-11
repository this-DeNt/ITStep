#include "_SSD_Class.h"
#include "_Framework.h"

SSD::SSD()
{
    this->SSDName = nullptr;
    this->memory = 0;
    this->uploadSpeed = 0.0;
    this->downloadSpeed = 0.0;
}

SSD::SSD(const char *inputSSDName):SSD()
{
    this->SSDName = new char[strlen(inputSSDName) + 1];
    strcpy(this->SSDName, inputSSDName);
}

SSD::SSD(const char *inputSSDName, int inputSSDMemory):SSD(inputSSDName)
{
    this->memory = inputSSDMemory;
}

SSD::SSD(const char *inputSSDName, int inputSSDMemory, double inputSSDUpSpeed):SSD(inputSSDName, inputSSDMemory)
{
    this->uploadSpeed = inputSSDUpSpeed;
}

SSD::SSD(const char *inputSSDName, int inputSSDMemory, double inputSSDUpSpeed, double inputSSDDownSpeed):SSD(inputSSDName, inputSSDMemory, inputSSDUpSpeed)
{
    this->downloadSpeed = inputSSDDownSpeed;
}

void SSD::setSSDName(const char *inputSSDName)
{
    if (this->SSDName != nullptr) {

        delete[] this->SSDName;
        this->SSDName = nullptr;
    }

    this->SSDName = new char[strlen(inputSSDName) + 1];
    strcpy(this->SSDName, inputSSDName);
}

void SSD::setSSDMemory(int inputSSDMemory)
{
    this->memory = inputSSDMemory;
}

void SSD::setSSDUpSpeed(double inputSSDUpSpeed)
{
    this->uploadSpeed = inputSSDUpSpeed;
}

void SSD::setSSDDownSpeed(double inputSSDDownSpeed)
{
    this->downloadSpeed = inputSSDDownSpeed;
}

void SSD::printSSDSpecs()
{
    std::cout << "Name: " << this->SSDName << std::endl
        << "Memory: " << this->memory << std::endl
        << "Upload Speed: " << this->uploadSpeed << std::endl
        << "Download Speed: " << this->downloadSpeed << std::endl;
}

char *SSD::getSSDName()
{
    return this->SSDName;
}

int SSD::getSSDMemory()
{
    return this->memory;
}

double SSD::getSSDUpSpeed()
{
    return this->uploadSpeed;
}

double SSD::getSSDDownSpeed()
{
    return this->downloadSpeed;
}

SSD::~SSD()
{
    delete[] this->SSDName;
}
