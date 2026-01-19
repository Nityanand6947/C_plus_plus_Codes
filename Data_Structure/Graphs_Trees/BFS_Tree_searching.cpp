#include <iostream>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform BFS on the binary tree
void bfs(TreeNode* root) {
    if (root==NULL) return; // If the tree is empty

    queue<TreeNode*> q; // Queue for BFS
    q.push(root); // Start with the root node

    while (!q.empty()) {
        TreeNode* current = q.front(); // Get the front node
        q.pop(); // Remove it from the queue

        cout << current->val << " "; // Process the current node
        // cout << (*current).val << " "; // Process the current node

        // Add the left child to the queue
        if (current->left) {
            q.push(current->left);
        }

        // Add the right child to the queue
        if (current->right) {
            q.push(current->right);
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

    cout << "BFS Traversal of the tree: ";
    bfs(root); // Perform BFS
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
