
#include <iostream>
using namespace std;

enum Signal { RED, YELLOW, GREEN };

int main() {
    Signal signals[] = {RED, GREEN, YELLOW, RED};

    for (int i = 0; i < 4; i++) 
    {
        switch (signals[i]) 
        {
            case RED:
                cout << "Signal " << i + 1 << ": STOP\n";
                break;

            case YELLOW:
                cout << "Signal " << i + 1 << "WAIT\n";
                break;

            case GREEN:
                cout << "Signal " << i + 1 << ": GO\n";
                break;
        }
    }
    return 0;
}
