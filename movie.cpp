#include <iostream>
#include <string>
using namespace std;

class Movie {
public:
    string title;
    float rating;

    void display() const {
        cout << "Movie Title: " << title << endl;
        cout << "Rating: " << rating << "/10" << endl;
    }
};

int main() {
    // Dynamic allocation using new
    Movie* m = new Movie;

    // Assign values
    m->title = "Inception";
    m->rating = 8.8;

    // Print values
    m->display();

    // Free the memory
    delete m;

    return 0;
}
