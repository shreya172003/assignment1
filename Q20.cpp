#include <iostream>
using namespace std;

// ---------------------- PART 1 ------------------------
// Base class
class Account {
public:
    virtual void displayBalance() {
        cout << "Account: Displaying balance" << endl;
    }
    virtual ~Account() {}  // Virtual destructor
};

class SavingAccount : public Account {
public:
    void displayBalance() override {
        cout << "Saving Account Balance: $5000" << endl;
    }
};

class CurrentAccount : public Account {
public:
    void displayBalance() override {
        cout << "Current Account Balance: $12000" << endl;
    }
};

// ---------------------- PART 2 ------------------------
// General class hierarchy with virtual function
class Animal {
public:
    virtual void makeSound() {
        cout << "Some generic animal sound" << endl;
    }
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks: Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows: Meow!" << endl;
    }
};

// ---------------------- MAIN ------------------------
int main() {
    // Part 1: Account hierarchy
    Account* acc1 = new SavingAccount();
    Account* acc2 = new CurrentAccount();

    acc1->displayBalance();  // Dynamic dispatch
    acc2->displayBalance();

    delete acc1;
    delete acc2;

    cout << "\n";

    // Part 2: Animal hierarchy
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->makeSound();  // Dog's version called
    a2->makeSound();  // Cat's version called

    delete a1;
    delete a2;

    return 0;
}
