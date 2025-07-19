#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    // Constructor
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    // Overload + operator
    Time operator+(const Time& other) {
        Time result;
        result.minutes = minutes + other.minutes;
        result.hours = hours + other.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }

    // Display
    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 45);
    Time t2(1, 30);
    Time result = t1 + t2;
    cout << "Total time: ";
    result.display();
    return 0;
}
