#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Number of vertices
    int numVertices = 7;

    // Create an adjacency list using a vector of vectors
    vector<vector<int>> adjList(numVertices);

    // Function to add edges to the adjacency list
    auto add_edge = [&adjList](int u, int v) {
        // Add edge from u to v
        adjList[u].push_back(v);
        // Add edge from v to u (undirected graph)
        adjList[v].push_back(u);
    };

    // Adding edges to the graph
    add_edge(0, 1);
    add_edge(1, 2);
    add_edge(0, 2);
    add_edge(2, 3);
    add_edge(1, 4);
    add_edge(4, 5);
    add_edge(3, 6);

    // Print the adjacency list representation
    cout << "Adjacency List for the Graph:" << endl;
    for (int i = 0; i < numVertices; ++i) {
        cout << i << " -> ";
        for (int neighbor : adjList[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
