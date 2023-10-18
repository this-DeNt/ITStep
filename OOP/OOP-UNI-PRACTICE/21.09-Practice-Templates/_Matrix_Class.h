#pragma once

#include "framework.h"

template<class mat_type>
class MATRIX {

private:

    mat_type** _matrix_ptr;
    unsigned int _rows;
    unsigned int _cols;

public:

    MATRIX();
    MATRIX(const unsigned _inputRows, const unsigned _inputCols);
    MATRIX(const MATRIX& _inputMat);

    void operator()(const unsigned int _inputRand);
    void operator()();

    // friend std::ostream& operator<<(const std::ostream& os, const MATRIX& _inputMat) const;
    // friend std::istream& operator>>(const std::istream& is, MATRIX _inputMat);

    mat_type returnMatrixMax() const;
    mat_type returnMatrixMin() const;

    mat_type& operator[](const unsigned int _Idx) const;

    MATRIX& operator=(const MATRIX& _inputMat);

    MATRIX& operator+(const mat_type _input);
    MATRIX& operator-(const mat_type _input);
    MATRIX& operator*(const mat_type _input);
    MATRIX& operator/(const mat_type _input);
    MATRIX& operator=(const mat_type _input);

};

template <class mat_type>
inline MATRIX<mat_type>::MATRIX()
{
    this->_matrix_ptr = nullptr;
    this->_cols = 0;
    this->_rows = 0;
}

template <class mat_type>
inline MATRIX<mat_type>::MATRIX(const unsigned _inputRows, const unsigned _inputCols)
{
    this->_rows = _inputRows;
    this->_cols = _inputCols;

    this->_matrix_ptr = new mat_type*[this->_rows];
    for (int i = 0; i < this->_rows; ++i) {

        this->_matrix_ptr[i] = new mat_type[this->_cols];
    }
}

template <class mat_type>
inline MATRIX<mat_type>::MATRIX(const MATRIX &_inputMat)
{
    this->_rows = _inputMat._rows;
    this->_cols = _inputMat._cols;

    this->_matrix_ptr = new mat_type*[this->_rows];
    for (int i = 0; i < this->_rows; ++i) {

        this->_matrix_ptr[i] = new mat_type[this->_cols];
    }

    for (int i = 0; i < this->_rows; ++i) {

        for (int j = 0; j < this->_cols; ++j) {

            this->_matrix_ptr[i][j] = _inputMat._matrix_ptr[i][j];
        }
    }
}

template <class mat_type>
inline void MATRIX<mat_type>::operator()(const unsigned int _inputRand)
{
    for (int i = 0; i < this->_rows; ++i) {

        for (int j = 0; j < this->_cols; ++j) {

            this->_matrix_ptr[i][j] = rand() % _inputRand;
        }
    }
}

template <class mat_type>
inline void MATRIX<mat_type>::operator()()
{
    for (int i = 0; i < this->_rows; ++i) {

        for (int j = 0; j < this->_cols; ++j) {

            std::cin >> this->_matrix_ptr[i][j];
        }
    }
}

template <class mat_type>
inline mat_type MATRIX<mat_type>::returnMatrixMax() const
{
    mat_type tempMax = this->_matrix_ptr[i][j];

    for (int i = 0; i < this->_rows; ++i) {

        for (int j = 0; j < this->_cols; ++j) {

            if (this->_matrix_ptr[i][j] > tempMax) {

                tempMax = this->_matrix_ptr[i][j];
            }
        }
    }

    return tempMax;
}

template <class mat_type>
inline mat_type MATRIX<mat_type>::returnMatrixMin() const
{
    mat_type tempMin = this->_matrix_ptr[i][j];

    for (int i = 0; i < this->_rows; ++i) {

        for (int j = 0; j < this->_cols; ++j) {

            if (this->_matrix_ptr[i][j] < tempMin) {

                tempMin = this->_matrix_ptr[i][j];
            }
        }
    }

    return tempMin;
}

template <class mat_type>
inline mat_type &MATRIX<mat_type>::operator[](const unsigned int _Idx) const
{
    if (_Idx > this->_rows) {

        return this->_matrix_ptr[this->_rows][this->_rows];
    }

    if (_Idx > this->_cols) {

        return this->_matrix_ptr[this->_cols][this->_cols];
    }

    return this->_matrix_ptr[_Idx][_Idx];
}

template <class mat_type>
inline MATRIX<mat_type> &MATRIX<mat_type>::operator=(const MATRIX &_inputMat)
{
    if (this == &_inputMat) {

        return *this;
    }

    for (int i = 0; i < this->_rows; ++i) {

        delete[] this->_matrix_ptr[i];
    }

    delete[] this->_matrix_ptr;

    this->_rows = _inputMat._rows;
    this->_cols = _inputMat._cols;

    this->_matrix_ptr = new mat_type*[this->_rows];
    for (int i = 0; i < this->_rows; ++i) {

        this->_matrix_ptr[i] = new mat_type[this->_cols];
    }

    for (int i = 0; i < this->_rows; ++i) {

        for (int j = 0; j < this->_cols; ++j) {

            this->_matrix_ptr[i][j] = _inputMat._matrix_ptr[i][j];
        }
    }

    return *this;
}

template <class mat_type>
inline MATRIX<mat_type>& MATRIX<mat_type>::operator+(const mat_type _input)
{
    MATRIX<mat_type> tempMAT(this->_rows, this->_cols);

    for (int i = 0; i < tempMAT._rows; ++i) {

        for (int j = 0; j < tempMAT._cols; ++j) {

            tempMAT[i][j] += _input;
        }
    }

    return tempMAT;
}

template <class mat_type>
inline MATRIX<mat_type> &MATRIX<mat_type>::operator-(const mat_type _input)
{
    MATRIX<mat_type> tempMAT(this->_rows, this->_cols);

    for (int i = 0; i < tempMAT._rows; ++i) {

        for (int j = 0; j < tempMAT._cols; ++j) {

            tempMAT[i][j] -= _input;
        }
    }

    return tempMAT;
}

template <class mat_type>
inline MATRIX<mat_type> &MATRIX<mat_type>::operator*(const mat_type _input)
{
    MATRIX<mat_type> tempMAT(this->_rows, this->_cols);

    for (int i = 0; i < tempMAT._rows; ++i) {

        for (int j = 0; j < tempMAT._cols; ++j) {

            tempMAT[i][j] *= _input;
        }
    }

    return tempMAT;
}

template <class mat_type>
inline MATRIX<mat_type> &MATRIX<mat_type>::operator/(const mat_type _input)
{
    MATRIX<mat_type> tempMAT(this->_rows, this->_cols);

    for (int i = 0; i < tempMAT._rows; ++i) {

        for (int j = 0; j < tempMAT._cols; ++j) {

            tempMAT[i][j] /= _input;
        }
    }

    return tempMAT;
}

template <class mat_type>
inline MATRIX<mat_type> &MATRIX<mat_type>::operator=(const mat_type _input)
{
    MATRIX<mat_type> tempMAT(this->_rows, this->_cols);

    for (int i = 0; i < tempMAT._rows; ++i) {

        for (int j = 0; j < tempMAT._cols; ++j) {

            tempMAT[i][j] = _input;
        }
    }

    return tempMAT;
}