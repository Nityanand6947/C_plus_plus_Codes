#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

// Graph represented as an adjacency list
unordered_map<char, vector<char>> graph = {
    {'A', {'B', 'C'}}, 
    {'B', {'A', 'D', 'E'}}, 
    {'C', {'A'}}, 
    {'D', {'B'}}, 
    {'E', {'B'}}
};

// DFS Traversal (using recursion)
void dfs_traversal(char node, unordered_set<char>& visited) {
    visited.insert(node);
    cout << node << " ";
    
    // Visit all neighbors
    for (char neighbor : graph[node]) {
        if (visited.find(neighbor) == visited.end()) {
            dfs_traversal(neighbor, visited);
        }
    }
}

// DFS for finding a path (no backtracking)
bool dfs_find_path(char start, char target, unordered_set<char>& visited) {
    visited.insert(start);
    
    if (start == target) {
        return true;  // Target found
    }
    
    // Visit all neighbors
    for (char neighbor : graph[start]) {
        if (visited.find(neighbor) == visited.end()) {
            if (dfs_find_path(neighbor, target, visited)) {
                return true;  // Path found
            }
        }
    }
    return false;  // Path not found
}

int main() {
    // DFS Traversal starting from 'A'
    unordered_set<char> visited;
    cout << "DFS Traversal Order: ";
    dfs_traversal('A', visited);
    cout << endl;
    
    // DFS Pathfinding: Find if there is a path from 'A' to 'E'
    visited.clear();  // Reset visited set for pathfinding
    if (dfs_find_path('A', 'E', visited)) {
        cout << "Path found from A to E!" << endl;
    } else {
        cout << "No path found from A to E!" << endl;
    }
    
    return 0;
}
