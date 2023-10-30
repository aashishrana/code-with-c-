
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
struct Queue {
    int* array;
    int front;
    int rear;
    int capacity;
    int size;

    Queue(int capacity) {
        this->capacity = capacity;
        array = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    ~Queue() {
        delete[] array;
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        rear = (rear + 1) % capacity;
        array[rear] = item;
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1; // You can choose a different way to handle this case
        }

        int item = array[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }

    void print() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        int index = front;
        for (int i = 0; i < size; ++i) {
            cout << array[index] << " ";
            index = (index + 1) % capacity;
        }
        cout << endl;
    }
    void reverseQue(Queue <int> &q) {
        stack <int> s;
        while(q.empty() == false) {
            s.push(q.front());
            q.pop();
        }

        while(s.empty() == false) {
            q.push(s.top());
            s.pop();
        }
    }
};



int main() {
    Queue queue(5);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    cout << "Queue elements: ";
    queue.print();

    cout << "Dequeue: " << queue.dequeue() << endl;

    cout << "Queue elements: ";
    queue.print();

    queue.enqueue(6);

    cout << "Queue elements: ";
    queue.print();

    return 0;
}
