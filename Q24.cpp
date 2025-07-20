#include <iostream>
#include <string>
using namespace std;

// Car Class
class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor
    Car(string b, string m, int y) : brand(b), model(m), year(y) {}

    // Display method
    void display() {
        cout << "Car: " << brand << " " << model << ", Year: " << year << endl;
    }
};

// Timer Class
class Timer {
public:
    Timer() {
        cout << "Timer started" << endl;
    }

    ~Timer() {
        cout << "Timer stopped" << endl;
    }
};

int main() {
    // Car object
    Car myCar("Toyota", "Corolla", 2020);
    myCar.display();

    // Timer object (goes out of scope at end of block)
    {
        Timer t;
        cout << "Doing some timed task..." << endl;
    } // Destructor called here

    return 0;
}
