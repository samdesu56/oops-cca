
#include <iostream>
using namespace std;

union Marks {
    int theory;
    float practical;
};

int main() {
    Marks m;

    m.theory = 85;
    cout << "Theory marks = " << m.theory << endl;

    m.practical = 91.5f;
    cout << "Practical marks = " << m.practical;

    return 0;
}
