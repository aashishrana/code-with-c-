#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// bool search(Node *root, int key) {
//     while(root != NULL) {        // iterative approach
//         if(root->data == key) {
//             return true;
//         }
//         else if (root->data > key)
//         {
//             /* code */

//             // search(root->left, key);
//             root = root->left;
//         }
//         else if (root->data < key) {
//             // search(root->right , key);
//             root = root->right;
//         }
        
//     }
//     return false;

// }


bool search(Node *root , int key) {
    if(root == NULL) {
        return false;
    }

    if(root->data == key) {
        return true;
    }
    else if(root->data > key) {
        return search(root->left , key);
    }
    else if(root->data < key) {
        return search(root->right , key);
    }
}

int main() {
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    root->right->right = new Node(80);
    int key = 7;

    bool result = search(root , key);
    cout << result;
    return 0;
}