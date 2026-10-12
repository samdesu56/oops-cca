
#include <iostream>
using namespace std;

union Measurement 
{
    float weight;
    float length;
    float volume;
};

int main() {
    Measurement m;
    m.weight = 5.5f;

    cout << "Product weight: " << m.weight << " kg";
    return 0;
}
