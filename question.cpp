#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static member variable

public:
    // Constructor increments count
    Counter() {
        count++;
    }

    // Static function to get count
    static int getCount() {
        return count;
    }
};

// Definition of static member outside the class
int Counter::count = 0;

int main() {
    // Access static count before creating any object
    cout << "Objects created: " << Counter::getCount() << endl;

    // Create objects
    Counter c1, c2, c3;

    // Access static count after object creation
    cout << "Objects created: " << Counter::getCount() << endl;

    return 0;
}
