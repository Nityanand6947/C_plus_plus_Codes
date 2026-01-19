#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows = 3, cols = 4;
    vector<vector<int>> array(rows, vector<int>(cols));

    // Initialize the 2D vector
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = value++;
        }
    }

    // Print the 2D vector
    for (const auto& row : array) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
