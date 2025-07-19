#include <iostream>
using namespace std;

class Vehicle {
protected:
    int speed;

public:
    // Virtual function for display (optional, for polymorphism)
    virtual void displaySpeed() const = 0;  // Pure virtual function
};

class Car : public Vehicle {
public:
    Car() {
        speed = 180;  // Set car max speed
    }

    void displaySpeed() const override {
        cout << "Car Speed: " << speed << " km/h" << endl;
    }
};

class Bike : public Vehicle {
public:
    Bike() {
        speed = 120;  // Set bike max speed
    }

    void displaySpeed() const override {
        cout << "Bike Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;
    Bike myBike;

    myCar.displaySpeed();
    myBike.displaySpeed();

    return 0;
}
