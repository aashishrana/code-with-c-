#include <iostream>
using namespace std;

struct Queue {
    int * array;
    int front;
    int rear;
    int capacity;
    int size;

    Queue(int cap) {
        this->capacity = cap;
        array = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;

    }

    ~Queue() {
        delete[]array;
    }

    bool isFull() {
        return size = capacity;
    }

    bool isEmpty() {
        return size = 0;
    }

    void print() {
        if(isEmpty()) {
            cout << " Queue is empty : " << endl;
            return;
        }

        int index = front;
        for(int i = 0; i<size; i++) {
            
        }

    }

};

int main() {

}