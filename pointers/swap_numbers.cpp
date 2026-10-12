
#include <iostream>
using namespace std;

int main() 
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;

    int temp = *p;
    *p = *q;
    *q = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b;

    return 0;
}
