#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int key) {
        val = key;
        left = right = NULL;
    }
};

void levelOrder(Node *root) {
    if(root != NULL) {

    }

     queue<Node *>q;
     
     // Enqueue
     q.push(root);

     while(q.empty() == false) {

        // Print front of queue and remove it from queue
        Node *curr = q.front();
        q.pop();
        cout << curr->val;
        if(curr->left != NULL) {
            q.push(curr->left);

        }
        if(curr->right != NULL) {
            q.push(curr->right);
        }
     }
}


// // Utility function to create a new tree node
// Node* newNode(int data)
// {
//     Node* temp = new Node;
//     temp->data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

     levelOrder(root);


}