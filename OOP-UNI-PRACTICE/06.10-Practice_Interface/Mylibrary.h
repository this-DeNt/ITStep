#pragma once
#include<iostream>
#include<string.h>
using namespace std;

struct IFly   // ��������� ��� ��������
{
	virtual void Fly() const = 0;
};
struct ISwim   // ��������� ��� ���������
{
	virtual void Swim() = 0;
};

class Animal  // ����������� ����� !!
{
protected:
	char * name;
	int kg;
public:
	Animal() = default;
	Animal(const char * n, int k)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		kg = k;
	}
	void Print()
	{
		cout << "Name: " << name << "Kg: " << kg << endl;
	}	
	virtual void Sound() const = 0;

	~Animal()
	{
		delete[] name;
	}
};

class Transport {

	protected:

		double _speed;
		char* _name;
	
	public:

		Transport() = default;
		Transport(const char* _InputName, double _InputSpeed) {

			this->_name = new char[strlen(_InputName) + 1];
			strcpy(this->_name, _InputName);

			this->_speed = _InputSpeed;
		}

		void print(void) const {

			std::cout << this->_name << std::endl << this->_speed << std::endl;
		}
		
		virtual void passenger(void) const = 0;

		~Transport() {

			delete[] this->_name;
		}
};

class Bird: public Animal, public IFly {

	public:

		Bird(const char* n, int k):Animal(n, k) {}

		virtual void Sound() const {

			std::cout << "tweet" << std::endl;
		}

		virtual void Fly() const {

			std::cout << "Birds can fly" << std::endl;
		}
};

class Plane: public Transport, public IFly {

	public:

		virtual void passenger(void) const {

			std::cout << "4 People" << std::endl;
		}

		virtual void Fly() const {

			std::cout << "Planes can fly" << std::endl;
		}
};