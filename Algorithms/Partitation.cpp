#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // 1. is_partitioned: Check if the range is partitioned (even numbers before odd)
    bool is_part = is_partitioned(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
    cout << "is_partitioned: " << (is_part ? "Yes" : "No") << endl;

    // 2. partition: Partition the range into even and odd numbers (order is not preserved)
    partition(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
    cout << "partition: Partitioned range (order not preserved): ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // 3. stable_partition: Partition the range into even and odd numbers (order preserved)
    vector<int> stable_vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    stable_partition(stable_vec.begin(), stable_vec.end(), [](int x) { return x % 2 == 0; });
    cout << "stable_partition: Partitioned range (order preserved): ";
    for (int num : stable_vec) cout << num << " ";
    cout << endl;

    // 4. partition_copy: Partition the range and copy to two separate ranges
    vector<int> even_nums, odd_nums;
    partition_copy(vec.begin(), vec.end(), back_inserter(even_nums), back_inserter(odd_nums), [](int x) { return x % 2 == 0; });
    cout << "partition_copy: Even numbers: ";
    for (int num : even_nums) cout << num << " ";
    cout << "\nOdd numbers: ";
    for (int num : odd_nums) cout << num << " ";
    cout << endl;

    // 5. partition_point: Find the partition point (first element that fails the condition)
    auto part_point = partition_point(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; });
    cout << "partition_point: First element that doesn't satisfy condition: " << *part_point << endl;

    return 0;
}
