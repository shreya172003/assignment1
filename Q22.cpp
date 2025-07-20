#include <iostream>
#include <string>
using namespace std;

// ---------------------- PART 1 ------------------------
// Book structure
struct Book {
    string title;
    string author;
    float price;
};

// ---------------------- PART 2 ------------------------
// Rectangle class
class Rectangle {
private:
    float length;
    float breadth;

public:
    void setDimensions(float l, float b) {
        length = l;
        breadth = b;
    }

    float calculateArea() {
        return length * breadth;
    }
};

// ---------------------- MAIN ------------------------
int main() {
    // Book input and display
    Book b;
    cout << "Enter book title: ";
    getline(cin, b.title);
    cout << "Enter book author: ";
    getline(cin, b.author);
    cout << "Enter book price: ";
    cin >> b.price;

    cout << "\nBook Details:\n";
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Price: $" << b.price << endl;

    cout << "\n";

    // Rectangle usage
    Rectangle r;
    float len, brd;
    cout << "Enter length and breadth of rectangle: ";
    cin >> len >> brd;
    r.setDimensions(len, brd);
    cout << "Area of rectangle: " << r.calculateArea() << endl;

    return 0;
}
