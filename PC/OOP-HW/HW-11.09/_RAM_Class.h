#pragma once

class RAM {

private:

    char* RAMName;
    char* socket;
    double price;
    int memory;

public:

    RAM(const char* inputRAMName);

    void setRAMName(const char* inputRAMName);
    void setRAMSocket(const char* inputRAMSocket);
    void setRAMPrice(double inputRAMPrice);
    void setRAMMemory(int inputRAMMemory);

    char* getRAMName();
    char* getRAMSocket();
    double getRAMPrice();
    int getRAMMemory();

    ~RAM();
};