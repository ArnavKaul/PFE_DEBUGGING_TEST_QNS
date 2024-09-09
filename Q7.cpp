#include <iostream>
using namespace std;

// Q7

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return arr[0];
}

int main() {
    int arr[] = {10, 20, 30, 40};
    cout << "Maximum value: " << findMax(arr, 4) << endl;
    return 0;
}
