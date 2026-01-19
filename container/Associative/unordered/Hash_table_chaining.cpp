#include <iostream>
#include <list>
#include <vector>
using namespace std;

class HashTable {
private:
    vector<list<pair<int, string>>> table;  // Hash table represented as a vector of lists
    int capacity;

    int hashFunction(int key) {
        return key % capacity;  // Simple modulo hash function
    }

public:
    HashTable(int size) : capacity(size) {
        table.resize(capacity);
    }

    void insert(int key, string value) {
        int index = hashFunction(key);
        table[index].push_back(make_pair(key, value));  // Insert in the corresponding list
    }

    void remove(int key) {
        int index = hashFunction(key);
        auto& cell = table[index];
        for (auto it = cell.begin(); it != cell.end(); ++it) {
            if (it->first == key) {
                cell.erase(it);  // Remove the element
                return;
            }
        }
    }

    string search(int key) {
        int index = hashFunction(key);
        auto& cell = table[index];
        for (auto& pair : cell) {
            if (pair.first == key) {
                return pair.second;  // Return value associated with the key
            }
        }
        return "Not Found";
    }
};

int main() {
    HashTable ht(10);  // Create a hash table with 10 buckets

    ht.insert(1, "One");
    ht.insert(11, "Eleven");
    ht.insert(21, "Twenty One");

    cout << "Value for key 11: " << ht.search(11) << endl;  // Output: Eleven
    ht.remove(11);
    cout << "Value for key 11 after removal: " << ht.search(11) << endl;  // Output: Not Found

    return 0;
}
