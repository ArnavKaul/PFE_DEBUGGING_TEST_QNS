#include <iostream>
using namespace std;

// Q9

int* createArray(int size) {
    int arr[5];  
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    return arr;  
}

int main() {
    int* newArr = createArray(5);
    for (int i = 0; i < 5; i++) {
        cout << newArr[i] << " ";  
    }
    return 0;
}
