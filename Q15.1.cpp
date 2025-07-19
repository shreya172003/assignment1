#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}
};

class Student : public Person {
private:
    int rollNumber;

public:
    // Constructor
    Student(string n, int a, int r) : Person(n, a), rollNumber(r) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s("Alice", 20, 101);
    s.display();
    return 0;
}
