#include <iostream>

using namespace std;

// Q3
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 2;
    int rotated = [0] * len(arr);
    for (int i =0; i<5; i++) {
        rotated[i] = arr[(i - k) % 5];
    }
    for (int i =0; i<5; i++) {
        cout << rotated[i] << " ";
    }
    return 0;
}
