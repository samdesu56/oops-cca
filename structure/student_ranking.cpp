
#include <iostream>
#include <string>
using namespace std;

struct Student 
{
    int rollNo;
    string name;
    float marks;
};

int main() 
{
    Student s[4] = {
        {101, "Asha", 85.5},
        {102, "Rahul", 92.0},
        {103, "Kiran", 78.5},
        {104, "Meera", 96.0}
    };

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3 - i; j++) 
        {
            if (s[j].marks < s[j + 1].marks) 
            {
                Student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    cout << "Student Rankings:\n";
    for (int i = 0; i < 4; i++) 
    {
        cout << i + 1 << ". " << s[i].name
             << " - " << s[i].marks << endl;
    }

    return 0;
}
