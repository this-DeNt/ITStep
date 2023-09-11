#include "_RAM_Class.h"
#include "_Framework.h"

RAM::RAM()
{
    this->RAMName = nullptr;
    this->socket = nullptr;
    this->price = 0.0;
    this->memory = 0;
}

RAM::RAM(const char *inputRAMName):RAM()
{
    this->RAMName = new char[strlen(inputRAMName) + 1];
    strcpy(this->RAMName, inputRAMName);
}

RAM::RAM(const char *inputRAMName, const char *inputRAMSocket):RAM(inputRAMName)
{
    this->socket = new char[strlen(inputRAMSocket) + 1];
    strcpy(this->socket, inputRAMSocket);
}

RAM::RAM(const char *inputRAMName, const char *inputRAMSocket, double inputRAMPrice):RAM(inputRAMName, inputRAMSocket)
{
    this->price = inputRAMPrice;
}

RAM::RAM(const char *inputRAMName, const char *inputRAMSocket, double inputRAMPrice, int inputRAMMemory):RAM(inputRAMName, inputRAMSocket, inputRAMPrice)
{
    this->memory = inputRAMMemory;
}

void RAM::setRAMName(const char *inputRAMName)
{
    if (this->RAMName != nullptr) {

        delete[] this->RAMName;
        this->RAMName = nullptr;
    }

    this->RAMName = new char[strlen(inputRAMName) + 1];
    strcpy(this->RAMName, inputRAMName);
}

void RAM::setRAMSocket(const char *inputRAMSocket)
{
    if (this->socket != nullptr) {

        delete[] this->socket;
        this->socket = nullptr;
    }

    this->socket = new char[strlen(inputRAMSocket) + 1];
    strcpy(this->socket, inputRAMSocket);
}

void RAM::setRAMPrice(double inputRAMPrice)
{
    this->price = inputRAMPrice;
}

void RAM::setRAMMemory(int inputRAMMemory)
{
    this->memory = inputRAMMemory;
}

void RAM::printRAMSpecs()
{
    std::cout << "Name: " << this->RAMName << std::endl
        << "Socket: " << this->socket << std::endl
        << "Price: " << this->price << std::endl
        << "Memory: " << this->memory << std::endl;
}

char *RAM::getRAMName()
{
    return this->RAMName;
}

char *RAM::getRAMSocket()
{
    return this->socket;
}

double RAM::getRAMPrice()
{
    return this->price;
}

int RAM::getRAMMemory()
{
    return this->memory;
}

RAM::~RAM()
{
    delete[] this->RAMName;
    delete[] this->socket;
}
