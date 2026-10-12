#include <iostream.h>
using namespace std;

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

int main()
{
    Day today = TUESDAY;
    cout<<"Day number = "<< today + 1;
    
    return 0;
}
