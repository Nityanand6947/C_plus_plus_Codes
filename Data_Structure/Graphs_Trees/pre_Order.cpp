#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }

    void preorderTraversal(Node* root) {
    if (root == NULL) 
    return;
        cout << root->data << " ";      // Visit node
        preorderTraversal(root->left);   // Visit left subtree
        preorderTraversal(root->right);  // Visit right subtree
}

};




int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(12);
    root->left->right = new Node(13);
    root->left->left->left = new Node(22);
    root->left->right->left = new Node(23);

    cout << "In-order Traversal: ";
    root->preorderTraversal(root);
    cout << endl;

    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl;

    return 0;
}
