
#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool available;
};

int main() {
    Book books[3] = {
        {101, "Wings", "A.P.J. Abdul Kalam", true},
        {102, "1984", "George Orwell", false},
        {103, "Hamlet", "Shakespeare", true}
    };

    int searchId = 102;
    bool found = false;

    for (int i = 0; i < 3; i++) {
        if (books[i].id == searchId) {
            found = true;
            cout << "Book: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Availability: "
                 << (books[i].available ? "Available" : "Issued");
            break;
        }
    }

    if (!found)
        cout << "Book not found";

    return 0;
}
