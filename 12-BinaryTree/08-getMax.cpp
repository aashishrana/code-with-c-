#include <iostream>
// #include <bits/stdc++.h>
#include <algorithm>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node *left;
    Node *right;

    Node (int value) {
        data = value;
        left = right = NULL;

    }
};

int getMax(Node *root) {
    if(root == NULL) {
        return INT16_MIN;
    }
    return max(root->data , max(getMax(root->left) , getMax(root->right)));
}


int main() {
    Node *root = new Node(10);
    root ->left = new Node(20);
    root ->right = new Node(30);
    root->left->left = new Node(35);
    root->right->right = new Node(40);

    int maxResult = getMax(root);
    cout << maxResult ;

    return 0;

}