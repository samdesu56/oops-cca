
#include <iostream>
using namespace std;

int main() 
{
    int n = 4;
    int *marks = new int[n]{85, 92, 78, 96};

    int highest = *marks;
    float total = 0;

    for (int i = 0; i < n; i++) {
        total += *(marks + i);

        if (*(marks + i) > highest)
            highest = *(marks + i);
    }

    cout << "Highest marks = " << highest << endl;
    cout << "Average marks = " << total / n;

    delete[] marks;
    return 0;
}
