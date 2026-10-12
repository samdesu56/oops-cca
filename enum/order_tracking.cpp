
#include <iostream>
using namespace std;

enum Order {PLACED, PACKED, SHIPPED, DELIVERED, CANCELLED};

int main() 
{
    Order status = SHIPPED;

    cout << "Order Status: ";

    switch (status) {
        case PLACED:
            cout << "Order placed";
            break;
        case PACKED:
            cout << "Order packed";
            break;
        case SHIPPED:
            cout << "Order shipped";
            break;
        case DELIVERED:
            cout << "Order delivered";
            break;
        case CANCELLED:
            cout << "Order cancelled";
            break;
    }

    return 0;
}
