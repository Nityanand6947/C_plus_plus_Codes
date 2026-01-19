#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int key) : val(key), left(nullptr), right(nullptr) {}
};

class BinarySearchTree {
private:
    Node* root;

    void insertRec(Node*& node, int key) {
        if (node == nullptr) {
            node = new Node(key);
        } else if (key < node->val) {
            insertRec(node->left, key);
        } else {
            insertRec(node->right, key);
        }
    }

    Node* searchRec(Node* node, int key) {
        if (node == nullptr || node->val == key) {
            return node;
        }
        if (key < node->val) {
            return searchRec(node->left, key);
        }
        return searchRec(node->right, key);
    }

    void inorderRec(Node* node) {
        if (node != nullptr) {
            inorderRec(node->left);
            cout << node->val << " ";
            inorderRec(node->right);
        }
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int key) {
        insertRec(root, key);
    }

    Node* search(int key) {
        return searchRec(root, key);
    }

    void inorderTraversal() {
        inorderRec(root);
        cout << endl;
    }
};

// Example usage
int main() {
    BinarySearchTree bst;
    bst.insert(10);
    bst.insert(5);
    bst.insert(15);
    bst.insert(3);
    bst.insert(7);

    cout << "In-order traversal: ";
    bst.inorderTraversal();

    // Searching for a value
    int searchKey = 7;
    Node* foundNode = bst.search(searchKey);
    if (foundNode) {
        cout << "Node " << searchKey << " found." << endl;
    } else {
        cout << "Node " << searchKey << " not found." << endl;
    }

    return 0;
}
