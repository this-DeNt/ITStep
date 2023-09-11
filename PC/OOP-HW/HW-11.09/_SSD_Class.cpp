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
}

void SSD::setSSDMemory(int inputSSDMemory)
{
}

void SSD::setSSDUpSpeed(double inputSSDUpSpeed)
{
}

void SSD::setSSDDownSpeed(double inputSSDDownSpeed)
{
}

void SSD::printSSDSpecs()
{
}

char *SSD::getSSDName()
{
    return nullptr;
}

int SSD::getSSDMemory()
{
    return 0;
}

double SSD::getSSDUpSpeed()
{
    return 0.0;
}

double SSD::getSSDDownSpeed()
{
    return 0.0;
}

SSD::~SSD()
{
}
