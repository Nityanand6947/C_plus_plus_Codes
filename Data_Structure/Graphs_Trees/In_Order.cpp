#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function for in-order traversal
// void inorderTraversal(Node* root) {
//     if (root != NULL) {
//         inorderTraversal(root->left);   // Visit left subtree
//         cout << root->data << " ";      // Visit node
//         inorderTraversal(root->right);  // Visit right subtree
//     }
// }


void inorderTraversal(Node* root) {
    if (root == NULL) 
     return;
    //here the function is calling itself so called recursive function
        inorderTraversal(root->left);   // Visit left subtree
        cout << root->data << " ";      // Visit node
        inorderTraversal(root->right);  // Visit right subtree
}


int main() {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(12);
    root->left->right = new Node(13);

    cout << "In-order Traversal: ";
    inorderTraversal(root);
    cout << endl;

    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl;

    return 0;
}