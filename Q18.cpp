#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Base constructor
    Animal() {
        cout << "Animal Constructor Called" << endl;
    }

    // Overloaded constructor
    Animal(string type) {
        cout << "Animal Constructor Called with type: " << type << endl;
    }

    // Base destructor
    ~Animal() {
        cout << "Animal Destructor Called" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Default constructor
    Dog() {
        cout << "Dog Constructor Called" << endl;
    }

    // Constructor chaining: call Animal(string) constructor
    Dog(string breed) : Animal("Mammal") {
        cout << "Dog Constructor Called for breed: " << breed << endl;
    }

    // Destructor
    ~Dog() {
        cout << "Dog Destructor Called" << endl;
    }
};

int main() {
    cout << "Creating Dog d1 using default constructor:\n";
    Dog d1;

    cout << "\nCreating Dog d2 using constructor chaining:\n";
    Dog d2("Labrador");

    return 0;
}
