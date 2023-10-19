#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int key) {
        data = key;
        left = right = NULL;
    }

};

int getSize(Node *root) {
    if(root == NULL) {
        return 0;
    }

    return 1 + getSize(root -> left) + getSize(root -> right);
    

}

int main() {
    Node *root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> right -> right = new Node(5);

    // calculate size
    int size = getSize(root);
    cout << size;

    return 0;


}