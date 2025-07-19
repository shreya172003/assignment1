#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
private:
    int a;

public:
    A(int val) : a(val) {}

    // Declare friend function
    friend void sumAB(const A&, const B&);
};

class B {
private:
    int b;

public:
    B(int val) : b(val) {}

    // Declare friend function
    friend void sumAB(const A&, const B&);
};

// Friend function definition
void sumAB(const A& objA, const B& objB) {
    int total = objA.a + objB.b;
    cout << "Sum of A and B's private members: " << total << endl;
}

int main() {
    A a(10);
    B b(20);
    sumAB(a, b);
    return 0;
}
