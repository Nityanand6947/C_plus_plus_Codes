
#include <iostream>
using namespace std;

class TreeNode {
public:
    int key;
    TreeNode *left;
    TreeNode *right;
    int height;

    TreeNode(int value) {
        key = value;
        left = nullptr;
        right = nullptr;
        height = 1; // New node is initially added at leaf
    }
};

class AVLTree {
public:
    TreeNode* insert(TreeNode* root, int key) {
        // Step 1: Perform normal BST insert
        if (!root)
            return new TreeNode(key);
        if (key < root->key)
            root->left = insert(root->left, key);
        else
            root->right = insert(root->right, key);

        // Step 2: Update height of this ancestor node
        root->height = 1 + max(getHeight(root->left), getHeight(root->right));

        // Step 3: Get the balance factor
        int balance = getBalance(root);

        // If the node becomes unbalanced, then there are 4 cases

        // Left Left Case
        if (balance > 1 && key < root->left->key)
            return rightRotate(root);

        // Right Right Case
        if (balance < -1 && key > root->right->key)
            return leftRotate(root);

        // Left Right Case
        if (balance > 1 && key > root->left->key) {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }

        // Right Left Case
        if (balance < -1 && key < root->right->key) {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }

        return root;
    }

    void preOrder(TreeNode* root) {
        if (root) {
            cout << root->key << " ";
            preOrder(root->left);
            preOrder(root->right);
        }
    }

private:
    int getHeight(TreeNode* node) {
        if (!node)
            return 0;
        return node->height;
    }

    int getBalance(TreeNode* node) {
        if (!node)
            return 0;
        return getHeight(node->left) - getHeight(node->right);
    }

    TreeNode* leftRotate(TreeNode* z) {
        TreeNode* y = z->right;
        TreeNode* T2 = y->left;

        // Perform rotation
        y->left = z;
        z->right = T2;

        // Update heights
        z->height = 1 + max(getHeight(z->left), getHeight(z->right));
        y->height = 1 + max(getHeight(y->left), getHeight(y->right));

        // Return the new root
        return y;
    }

    TreeNode* rightRotate(TreeNode* z) {
        TreeNode* y = z->left;
        TreeNode* T3 = y->right;

        // Perform rotation
        y->right = z;
        z->left = T3;

        // Update heights
        z->height = 1 + max(getHeight(z->left), getHeight(z->right));
        y->height = 1 + max(getHeight(y->left), getHeight(y->right));

        // Return the new root
        return y;
    }
};

int main() {
    AVLTree tree;
    TreeNode* root = nullptr;

    // Insert nodes
    root = tree.insert(root, 10);
    root = tree.insert(root, 20);
    root = tree.insert(root, 30);
    root = tree.insert(root, 40);
    root = tree.insert(root, 50);
    root = tree.insert(root, 25);

    // Preorder traversal
    cout << "Preorder traversal of the constructed AVL tree is:\n";
    tree.preOrder(root);

    return 0;
}
