#include <iostream>
using namespace std;

// Q8

void printArray(int arr[]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {10, 20, 30};
    printArray(arr); 
    return 0;
}
