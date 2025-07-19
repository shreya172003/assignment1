#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    void showName() {
        cout << "Employee Name: " << name << endl;
    }
};

class Manager : public Employee {
public:
    void setName(string n) { name = n; }
    void display() { showName(); }
};

class Intern : private Employee {
public:
    void setName(string n) { name = n; }
    void display() { showName(); }
};

class TeamLead : protected Employee {
public:
    void setName(string n) { name = n; }
    void display() { showName(); }
};

int main() {
    Manager m;
    m.setName("Alice");
    m.display();
    m.name = "Manager Alice";  // ✅ Accessible
    m.showName();              // ✅ Accessible

    Intern i;
    i.setName("Bob");
    i.display();
    // i.name = "X";         ❌ Error: name is private
    // i.showName();         ❌ Error: showName is private

    TeamLead t;
    t.setName("Charlie");
    t.display();
    // t.name = "X";         ❌ Error: name is protected
    // t.showName();         ❌ Error: showName is protected

    return 0;
}
