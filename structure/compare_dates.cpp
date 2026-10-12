
#include <iostream>
using namespace std;

struct Date 
{
    int day;
    int month;
    int year;
};

int compareDates(Date a, Date b) 
{
    if (a.year != b.year)
        return a.year < b.year ? -1 : 1;

    if (a.month != b.month)
        return a.month < b.month ? -1 : 1;

    if (a.day != b.day)
        return a.day < b.day ? -1 : 1;

    return 0;
}

int main() 
{
    Date d1 = {15, 8, 2025};
    Date d2 = {20, 1, 2026};

    int result = compareDates(d1, d2);

    if (result < 0)
        cout << "First date is earlier";
    else if (result > 0)
        cout << "Second date is earlier";
    else
        cout << "Both dates are equal";

    return 0;
}
