#include <iostream>

using namespace std;

// Q4

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 10}};
    for (int i =0; i<3; i++) {
        for (int j =0; j<3; j++) {
            if (matrix[i][j] % 2 == 0) {
                matrix[i][j] = matrix[i][j + 1];
            }
        }
    }
    for (int i =0; i<3; i++) {
        for (int j =0; j<3; j++) {
            cout << matrix[i][j] << " ";
        }
    }
    return 0;
}
