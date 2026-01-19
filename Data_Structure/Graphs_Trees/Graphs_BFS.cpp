#include <iostream>
#include <queue>
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

// BFS Traversal
void bfs_traversal(char start) {
    unordered_set<char> visited;  // To track visited nodes
    queue<char> q;  // Queue for BFS
    
    q.push(start);
    visited.insert(start);
    
    cout << "BFS Traversal Order: ";
    
    while (!q.empty()) {
        char node = q.front();
        q.pop();
        cout << node << " ";
        
        // Visit all neighbors
        for (char neighbor : graph[node]) { //like graph[A] then it will give B,C to traverse/
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

// BFS Shortest Path
unordered_map<char, int> bfs_shortest_path(char start) {
    unordered_map<char, int> distance;
    unordered_set<char> visited;
    queue<char> q;
    
    // Initialize distances to -1 (unvisited)
    for (auto &node : graph) {
        distance[node.first] = -1;
    }
    
    q.push(start);
    visited.insert(start);
    distance[start] = 0;  // Starting node has distance 0
    
    while (!q.empty()) {
        char node = q.front();
        q.pop();
        
        // Visit all neighbors
        for (char neighbor : graph[node]) {
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                q.push(neighbor);
                distance[neighbor] = distance[node] + 1;
            }
        }
    }
    return distance;
}

int main() {
    // BFS Traversal starting from 'A'
    bfs_traversal('A');
    
    // Find shortest path from 'A' to all nodes
    // unordered_map<char, int> distance = bfs_shortest_path('A');
    // cout << "Shortest distances from A:" << endl;
    // for (auto &entry : distance) {
    //     cout << "Distance from A to " << entry.first << ": " << entry.second << endl;
    // }
    
    return 0;
}
