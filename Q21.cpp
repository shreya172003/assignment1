#include <iostream>
#include <cmath>
using namespace std;

// ---------------------- PART 1 ------------------------
// Abstract Base Class
class Shape {
public:
    virtual double area() const = 0;  // Pure virtual function
    virtual ~Shape() {}               // Virtual destructor
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override {
        return side * side;
    }
};

// ---------------------- PART 2 ------------------------
// Base class with virtual destructor
class Base {
public:
    Base() { cout << "Base constructor called" << endl; }
    virtual ~Base() { cout << "Base destructor called" << endl; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor called" << endl; }
    ~Derived() { cout << "Derived destructor called" << endl; }
};

// ---------------------- MAIN ------------------------
int main() {
    // Part 1: Abstract class and polymorphism
    Shape* s1 = new Circle(5.0);
    Shape* s2 = new Square(4.0);

    cout << "Area of Circle: " << s1->area() << endl;
    cout << "Area of Square: " << s2->area() << endl;

    delete s1;
    delete s2;

    cout << "\n";

    // Part 2: Virtual destructor demo
    Base* b = new Derived();  // Base pointer to Derived
    delete b;                 // Should call both destructors properly

    return 0;
}
