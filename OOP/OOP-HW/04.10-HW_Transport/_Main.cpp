#include "framework.h"
#include "classframework.h"

int main(int argc, char* argv[]) {

    Transport* _ptr = nullptr;

    int x;
    std::cout << "1. Car" << std::endl << "2. Ship" << std::endl << "3. Plane" << std::endl << "4. Train" << std::endl << "5. Tram" << std::endl;
    std::cout << ">";
    std::cin >> x;

    switch (x)
    {
    case 1:
        _ptr = new Car("Diesel", "Toyota", 150, 60.66, "Truck");
        break;
    case 2:
        _ptr = new Ship("Solar", "Mayers", 5000, 10.1, "Cargo");
        break;
    case 3:
        _ptr = new Plane("Some Heavy", "General Motors", 7000, 1000.98, "Passenger");
        break;
    case 4:
        _ptr = new Train("Diesel", "JamboTransit", 8000, 500.50, "Coal");
        break;
    case 5:
        _ptr = new Tram("Electricity", "OdessaCity", 2, 0.1, "Parasha");
        break;
    
    default:
        break;
    }

    _ptr->print();
}