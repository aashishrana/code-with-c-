#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node (int value) {
        data = value;
        left = right = NULL;
    }
};

int countNodes(Node *root) {
    if(root == NULL) {
        return 0;

    }

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(5);
    root->right->right = new Node(10);

    int totalNodes = countNodes(root);
    cout << totalNodes;

    return 0;
}