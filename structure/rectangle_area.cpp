
#include <iostream>
using namespace std;

struct Rectangle 
{
    float length;
    float breadth;
};

int main() 
{
    Rectangle r = {10, 5};

    float area = r.length * r.breadth;

    cout << "Area of rectangle = " << area;
    return 0;
}
