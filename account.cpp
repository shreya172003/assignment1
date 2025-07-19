#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    Account() : balance(0.0) {}

    // Method that allows method chaining
    Account& setBalance(double b) {
        balance = b;
        return *this;
    }

    void display() const {
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    Account acc;
    acc.setBalance(5000.75).display();  // Method chaining
    return 0;
}
