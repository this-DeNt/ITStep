#pragma once

class DynArr {

private:

    int arrSize;
    int* arrPtr;
    void swap(int* a, int* b);

public:

	DynArr();
	DynArr(int);
	DynArr(const DynArr&);

	void Input();
	void Output() const;

	int * GetPointer() const;
	int GetSize() const;

    void resize(int newArrSize);
    void sort();
    int search(int searchInput);
    void reverse();

	~DynArr();
};
