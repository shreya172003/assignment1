#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for polymorphism
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }

    // Non-overridden function
    void describe() {
        cout << "This is a generic shape." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    // Base class pointer pointing to Circle
    Shape* shapePtr;

    Circle c;
    Rectangle r;

    // Call overridden draw()
    shapePtr = &c;
    shapePtr->draw();      // Output: Drawing Circle

    shapePtr = &r;
    shapePtr->draw();      // Output: Drawing Rectangle

    // Demonstrate non-overridden function call
    shapePtr = &c;
    shapePtr->describe();  // Output: This is a generic shape.

    return 0;
}
