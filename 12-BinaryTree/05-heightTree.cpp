#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node.
struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int key) {
        val = key;
        left = right = NULL;
    }
};

int height(Node* root) {
    if (root == NULL) {
        return 0;
    }

    // Recursively calculate the height of the left and right subtrees
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    // Return the maximum height of the left and right subtrees, plus 1 for the current node
    return 1 + std::max(leftHeight, rightHeight);
}

int main() {
    // Create a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Calculate the height of the tree
    int treeHeight = height(root);

    cout << "Height of the tree is: " << treeHeight << endl;

    // Don't forget to free the memory allocated for the tree nodes to avoid memory leaks
    delete root;
    delete root->left;
    delete root->right;
    delete root->left->left;
    delete root->left->right;

    return 0;
}
