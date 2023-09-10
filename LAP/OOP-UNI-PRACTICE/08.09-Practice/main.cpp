#include "framework.h"
#include "car.h"
#include "car.cpp"

int main(int argc, char* argv[]) {

    Car carA;
    Car carB("Nissan Leaf", "Blue", 2004, 10.10);

    std::cout << "CarB: " << std::endl;
    carB.print();
    std::cout << "================" << std::endl;
    std::cout << "Enter CarA info: " << std::endl;
    carA.input();
    std::cout << "================" << std::endl;
    std::cout << std::endl;
    
    const char* model = carA.getModel();
    const char* color = carB.getColor();
    int year = carA.getYear();
    double price = carB.getPrice();

    std::cout << "CarA model: " << model << std::endl;
    std::cout << "CarB color: " << color << std::endl;
    std::cout << "CarA year: " << year << std::endl;
    std::cout << "CarB price: " << price << std::endl;

    char inputModel[50];
    char inputColor[50];
    int inputYear;
    double inputPrice;

    std::cout << "Enter CarA new model: ";
    std::cin.ignore();
    std::cin.getline(inputModel, 50);
    carA.setModel(inputModel);

    std::cout << "Enter CarB new color: ";
    std::cin.ignore();
    std::cin.getline(inputColor, 50);
    carB.setColor(inputColor);

    std::cout << "Enter CarA new year: ";
    std::cin >> year;
    carA.setYear(inputYear);

    std::cout << "Enter CarB new price: ";
    std::cin >> price;
    carB.setPrice(inputPrice);
}