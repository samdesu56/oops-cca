#include <iostream>
using namespace std;

union Salary 
{
    int monthlySalary;
    float hourlyRate;
};

int main() 
{
    Salary s;
    s.monthlySalary = 30000;

    cout << "Monthly salary: " << s.monthlySalary;
    return 0;
}
