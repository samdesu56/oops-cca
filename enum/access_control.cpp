
#include <iostream>
using namespace std;

enum Role { GUEST, STUDENT, ADMIN };

int main() {
    Role user = STUDENT;

    switch (user) {
        case GUEST:
            cout << "Access: View website only";
            break;
        case STUDENT:
            cout << "Access: View courses and submit assignments";
            break;
        case ADMIN:
            cout << "Access: Full system control";
            break;
    }

    return 0;
}
