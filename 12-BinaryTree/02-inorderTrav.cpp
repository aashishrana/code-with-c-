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

void inorder(Node *root) {  // left root right
    if(root != NULL) {
        inorder(root->left);
        cout << (root->key);
        inorder(root->right);     /// Time complexity of O(n)
    }
}


int height(Node *root) {
    if(root == NULL) {
        return 0;
    }

    return max(height(root->left), height(root->right)) + 1;
}


int main() {
    Node *root = new Node(30);
    root->left = new Node(20);
    root->right = new Node(10);
    root->left->left = new Node(50);

    inorder(root);
    int height1 = height(root);
    cout << endl;
    cout << height1 << " ";

    return 0;

}


