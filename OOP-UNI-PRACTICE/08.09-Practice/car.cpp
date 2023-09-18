#include "car.h"
#include "framework.h"

Car::Car()
{
    this->model = nullptr;
    this->color = nullptr;
    this->year = 0;
    this->price = 0.0;
}

Car::Car(const char *m, const char *c, int y, double p)
{
    this->model = new char[strlen(m) + 1];
    strcpy(this->model, m);

    this->color = new char[strlen(c) + 1];
    strcpy(this->color, c);

    this->year = y;
    this->price = p;

}

void Car::input()
{
    char buffer1[50];
    char buffer2[50];

    std::cout << "Enter model: ";
    std::cin.ignore();
    std::cin.getline(buffer1, 50);

    if(this->model != nullptr) {

        delete[] this->model;
    }

    this->model = new char[strlen(buffer1) + 1];
    strcpy(this->model, buffer1);

    std::cout << "Enter color: ";
    std::cin.ignore();
    std::cin.getline(buffer2, 50);

    if(this->color != nullptr) {

        delete[] this->color;
    }

    this->color = new char[strlen(buffer2) + 1];
    strcpy(this->color, buffer2);

    int inputYear;
    double inputPrice;

    std::cout << "Enter year: ";
    std::cin >> inputYear;

    this->year = inputYear;

    std::cout << "Enter price: ";
    std::cin >> inputPrice;

    this->price = inputPrice;
}

void Car::print()
{
    std::cout << "Car model: " << this->model << std::endl;
    std::cout << "Car color: " << this->color << std::endl;
    std::cout << "Car year: " << this->year << std::endl;
    std::cout << "Car price: " << this->price << std::endl;
}

char *Car::getModel()
{
    return this->model;
}

char *Car::getColor()
{
    return this->color;
}

int Car::getYear()
{
    return this->year;
}

double Car::getPrice()
{
    return this->price;
}

void Car::setModel(const char *m)
{
    if (this->model != nullptr) {

        delete[] this->model;
    }

    this->model = new char[strlen(m + 1)];
    strcpy(this->model, m);
}

void Car::setColor(const char *c)
{
    if (this->color != nullptr) {

        delete[] this->color;
    }

    this->color = new char[strlen(c) + 1];
    strcpy(this->color, c);
}

void Car::setYear(int y)
{
    this->year = y;
}

void Car::setPrice(double p)
{
    this->price = p;
}

Car::~Car()
{
    delete[] this->model;
    delete[] this->color;
}
