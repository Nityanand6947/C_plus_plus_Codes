#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents overflow

        if (arr[mid] == target) {
            return mid; // Target found
        } 
        else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } 
        else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int result = binarySearch(arr, size, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
