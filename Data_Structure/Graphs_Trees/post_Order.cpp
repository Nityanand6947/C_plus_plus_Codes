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

    void postorderTraversal(Node* root) {
    if (root == NULL) 
    return;
        postorderTraversal(root->left);   // Visit left subtree
        postorderTraversal(root->right);  // Visit right subtree
        cout << root->data << " ";      // Visit node
}

};




int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(12);
    root->left->right = new Node(13);

    cout << "In-order Traversal: ";
    root->postorderTraversal(root);
    cout << endl;

    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl;

    return 0;
}
