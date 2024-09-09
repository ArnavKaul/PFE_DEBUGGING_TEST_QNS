#include <iostream>

using namespace std;

// Q5

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 3; i <= 8; i++) {
        cout << arr[i-3] << " ";
    }
    return 0;
}
