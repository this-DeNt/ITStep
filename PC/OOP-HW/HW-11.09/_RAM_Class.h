#pragma once

class RAM {

private:

    char* RAMName;
    char* socket;
    double price;
    int memory;

public:

    RAM();
    RAM(const char* inputRAMName);
    RAM(const char* inputRAMName, const char* inputRAMSocket);
    RAM(const char* inputRAMName, const char* inputRAMSocket, double inputRAMPrice);
    RAM(const char* inputRAMName, const char* inputRAMSocket, double inputRAMPrice, int inputRAMMemory);
    RAM(const RAM & copyRAM);
    
    void setRAMName(const char* inputRAMName);
    void setRAMSocket(const char* inputRAMSocket);
    void setRAMPrice(double inputRAMPrice);
    void setRAMMemory(int inputRAMMemory);

    void printRAMSpecs();

    char* getRAMName();
    char* getRAMSocket();
    double getRAMPrice();
    int getRAMMemory();

    ~RAM();
};