
#include <iostream>
using namespace std;

union PersonData 
{
    int age;
    int id;
};

int main() 
{
    PersonData p;
    p.age = 20;

    cout << "Age: " << p.age;
    return 0;
}
