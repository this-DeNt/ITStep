#include "_Dynamic_Arr.h"
#include "_Framework.h"

void DynArr::swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

DynArr::DynArr() : arrSize(0), arrPtr(nullptr) {}

DynArr::DynArr(int arrSizeInput)
{
    this->arrSize = arrSizeInput;
    this->arrPtr = new int[arrSize];
}

DynArr::DynArr(const DynArr & copyArr)
{
    this->arrSize = copyArr.arrSize;
    this->arrPtr = new int[arrSize];

    for (int i = 0; i < this->arrSize; ++i) {

        this->arrPtr[i] = copyArr.arrPtr[i];
    }
}

void DynArr::Input()
{
    for (int i = 0; i < this->arrSize; ++i) {

        this->arrPtr[i] = rand() % 20;
    }
}

void DynArr::Output() const
{
    for (int i = 0; i < this->arrSize; ++i) {

        std::cout << this->arrPtr[i] << " ";
    }
}

int *DynArr::GetPointer() const
{
    return this->arrPtr;
}

int DynArr::GetSize() const
{
    return this->arrSize;
}

void DynArr::resize(int newArrSize)
{
    int* tempArr = new int[newArrSize];

    for (int i = 0; i < this->arrSize; ++i) {

        tempArr[i] = this->arrPtr[i];
    }

    for (int i = this->arrSize; i < newArrSize; ++i) {

        tempArr[i] = 0;
    }

    delete[] this->arrPtr;
    this->arrPtr = tempArr;
    this->arrSize = newArrSize;
}

void DynArr::sort()
{
    for (int i = 0; i < this->arrSize - 1; ++i) {

        bool sorted = 0;

        for (int j = 0; j < this->arrSize - i - 1; ++j) {

            if (this->arrPtr[j] > this->arrPtr[j + 1]) {

                int temp = this->arrPtr[j];
                this->arrPtr[j] = this->arrPtr[j + 1];
                this->arrPtr[j + 1] = temp;

                sorted = 1;
            }

        }

        if (!sorted) {

            break;
        }
    }
}

int DynArr::search(int searchInput)
{
    for (int i = 0; i < this->arrSize; ++i) {

        if (this->arrPtr[i] == searchInput) {

            return i;
        }
    }

    return -1;
}

void DynArr::reverse()
{
    for (int i = 0; i < this->arrSize - 1; ++i) {

        bool sorted = 0;

        for (int j = 0; j < this->arrSize - i - 1; ++j) {

            if (this->arrPtr[j] < this->arrPtr[j + 1]) {

                int temp = this->arrPtr[j];
                this->arrPtr[j] = this->arrPtr[j + 1];
                this->arrPtr[j + 1] = temp;

                sorted = 1;
            }

        }

        if (!sorted) {

            break;
        }
    }
}

DynArr::~DynArr()
{
    delete[] this->arrPtr;
}
