#pragma once
class DynamicArray{
 int* ptr; // указатель на динам. массив int size;  // размер массива 
 int size;
public: DynamicArray();
 DynamicArray(int); DynamicArray(const DynamicArray&); // copy constructor
 ~DynamicArray(); void Input();// rand
 void Output();// вывод на консоль 
 int* GetPointer();
 int GetSize();
 void ReSize(int size);
 void Sort(); int Search(int a);
 void Reverse();

DynamicArray operator+(int new_size); // DynamicArray rez = a + 10;  увеличиваем кол-во элементов на 10

DynamicArray operator*(int mult); //rez = a * 2; значение каждого элемента массива умножаем на 2, возвращаем новый массив!

};