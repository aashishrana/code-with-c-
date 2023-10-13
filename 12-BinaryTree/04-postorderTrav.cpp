#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;

    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

void postorder(Node *root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->key;
    }

}

int main() {
    Node *root = new Node(50);
    root->left = new Node(40);
    root->right = new Node(30);
    root->right->right = new Node(60);

    postorder(root);

    return 0;

}