#include <iostream>
using namespace std;

// Engine class
class Engine {
public:
    void start() {
        cout << "Engine started!" << endl;
    }
};

// Car class using Engine (Composition)
class Car {
private:
    Engine engine;
public:
    void startCar() {
        cout << "Starting the car..." << endl;
        engine.start();
    }
};

// Base Printer class
class Printer {
public:
    void printDocument() {
        cout << "Printing document..." << endl;
    }
};

// SmartPrinter inherits from Printer
class SmartPrinter : public Printer {
public:
    void scanDocument() {
        cout << "Scanning document..." << endl;
    }
};

int main() {
    Car myCar;
    myCar.startCar();

    cout << endl;

    SmartPrinter sp;
    sp.printDocument();
    sp.scanDocument();

    return 0;
}
