#include "_ArrayValueCalc.h"
#include "_Exception.h"
#include "_ArrayValueExcp.h"
#include "_arrSizeException.h"
#include <iostream>
#include <string>
#include <cstring>

u_int ArrValueCalc::doCalc(char* arr[], u_int rows, u_int cols) const
{

    int sum = 0;

    try {

        if (rows > 4 || rows < 4 || cols > 4 || cols < 4) {

            throw ArrSizeException("Wrong size");
        }

        try {

            for (int i = 0; i < rows; ++i) {

                for (int j = 0; j < cols; ++j) {

                    sum += arr[i][j];

                    if (arr[i][j] > 90 || arr[i][j] < 65 || arr[i][j] < 97 || arr[i][j] > 122) {

                        throw ArrValueException("Incorrect Value", i, j);
                    }
                }
            }
        }
        catch(ArrValueException valExc) {

            std::cout << "Error at " << valExc.getRow() << " " << valExc.getCol() << std::endl;

            valExc.getMsg();
        }
    }

    catch(ArrSizeException arrSizeExc) {

        arrSizeExc.getMsg();
    }

    return sum;
}