
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[7] = {12, 45, 67, 45, 34, 67, 56};
    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < 7; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        cout << "No second-largest distinct element";
    else
        cout << "Second-largest element = " << second;

    return 0;
}
