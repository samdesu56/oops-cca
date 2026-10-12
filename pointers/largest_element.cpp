
#include <iostream>
using namespace std;

int main() 
{
    int data[] = {34, 87, 21, 96, 53, 42};
    int *start = data;
    int *end = data + 6;
    int largest = *start;

    for (int *p = start + 1; p < end; p++) {
        if (*p > largest)
            largest = *p;
    }

    cout << "Largest element = " << largest;

    return 0;
}
