#include "Car.h"
#include<iostream>
#include <cstring>
using namespace std;


Car::Car()
{
}

Car::Car(const char* m, int y)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);
	
	this->year = y;
}

Car::~Car()
{
	delete[]this->model;
}

void Car::Input()
{
}

void Car::Print()
{
}
