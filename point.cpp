#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Constructor
    Point(int x_val = 0, int y_val = 0) : x(x_val), y(y_val) {}

    // Const member function to display coordinates
    void display() const {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    const Point p1(10, 20);  // const object
    p1.display();            // calling const function using const object
    return 0;
}
