#include <iostream>
using namespace std;

// Q6

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 1; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {5, 10, 15, 20};
    cout << "Sum of array: " << sumArray(arr, 4) << endl;
    return 0;
}
