#include <iostream>
using namespace std;

int main() {
    const int rows = 3; // Number of rows
    const int cols = 4; // Number of columns

    // Declaration and initialization of two 2D arrays
    int array1[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int array2[rows][cols] = {
        {10, 9, 8, 7},
        {6, 5, 4, 3},
        {2, 1, 0, -1}
    };

    // Resultant array to store the sum
    int sum[rows][cols];

    // Adding the two arrays
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Print the resulting sum array
    cout << "Sum of the two 2D arrays:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << " "; // Accessing elements
        }
        cout << endl; // New line for each row
    }

    return 0;
}
