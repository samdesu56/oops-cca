
#include <iostream>
using namespace std;

int main() 
{
    int a = 15, b = 25;
    int *p = &a, *q = &b;

    int sum = *p + *q;

    cout << "Sum = " << sum;
    return 0;
}
