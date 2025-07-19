#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Display
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.2, 4.5);
    Complex c2(1.8, 2.5);
    Complex result = c1 + c2;
    cout << "Sum of complex numbers: ";
    result.display();
    return 0;
}
