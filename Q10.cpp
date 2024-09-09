#include <iostream>

using namespace std;

// Q10

int sumArray(int arr[]) {
    int size = sizeof(arr) / sizeof(arr[0]); 
    int sum = 0;
    cout << size;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Sum of array: " << sumArray(arr) << endl;
    return 0;
}
