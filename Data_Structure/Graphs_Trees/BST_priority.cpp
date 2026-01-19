#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform BFS on the binary tree with priority for a specific value
void bfsWithPriority(TreeNode* root, int priorityValue) {
    if (root == nullptr) return; // If the tree is empty

    queue<TreeNode*> q; // Regular queue for BFS
    bool priorityFound = false;

    // First, perform a level-order traversal to check for the priority value
    vector<TreeNode*> nodes; // Store nodes in order of appearance
    q.push(root);
    
    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        
        // Check if the current node has the priority value
        if (current->val == priorityValue) {
            cout << current->val << " "; // Print the priority node first
            priorityFound = true; // Mark that we've found the priority value
        } else {
            nodes.push_back(current); // Store other nodes for later processing
        }

        // Add children to the queue
        if (current->left) {
            q.push(current->left);
        }
        if (current->right) {
            q.push(current->right);
        }
    }

    // If the priority node was found, print the rest of the nodes
    if (priorityFound) {
        for (TreeNode* node : nodes) {
            cout << node->val << " "; // Print other nodes
        }
    }
}

int main() {
    // Creating a simple binary tree:
    //         1
    //        / \
    //      2    3
    //      / \   \
    //     4   5   6

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    cout << "BFS Traversal of the tree with priority value: ";
    bfsWithPriority(root, 3); // Perform BFS with priority for value 5
    cout << endl;

    // Clean up memory (optional for this simple example)
    delete root->left->left;
    delete root->left->right;  
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}
