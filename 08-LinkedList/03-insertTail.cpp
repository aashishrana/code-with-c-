#include <iostream>
using namespace std;


class Node {

    public:
    int data;
    Node * next;

    // Constructor

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtTail(Node* &tail, int d) {
    // new node create

    Node * temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

int main() {
    Node * node1 = new Node(10);

    // 
}