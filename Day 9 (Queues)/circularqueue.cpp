#include <iostream>
using namespace std;

void enqueue(int cqueue[], int &front, int &rear, int size, int e) {
    if ((rear + 1) % size == front) { // Circular queue is full
        cout << "Queue has reached its max limit. Please remove elements before enqueueing.\n";
        return;
    }

    if (front == -1 && rear == -1) { // First element insertion
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % size; // Move rear in a circular manner
    }
    cqueue[rear] = e;
}

void dequeue(int cqueue[], int &front, int &rear, int size) {
    if (front == -1 && rear == -1) { // Queue is empty
        cout << "Queue is empty, please add elements.\n";
        return;
    }

    if (front == rear) { // Queue becomes empty
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % size; // Move front in a circular manner
    }
}

void display_cqueue(int cqueue[], int front, int rear, int size) {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "The circular queue is: ";
    int i = front;
    while (true) {
        cout << cqueue[i] << " ";
        if (i == rear) break; // Stop when front meets rear
        i = (i + 1) % size;   // Move i in a circular manner
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter max length of queue: ";
    cin >> size;
    size++; // Increase size to differentiate full and empty conditions
    int cqueue[size];
    int front = -1, rear = -1;

    enqueue(cqueue, front, rear, size, 5);
    enqueue(cqueue, front, rear, size, 2);
    enqueue(cqueue, front, rear, size, 9);
    enqueue(cqueue, front, rear, size, 1);
    display_cqueue(cqueue, front, rear, size);
    dequeue(cqueue, front, rear,size);
    display_cqueue(cqueue, front, rear, size);
    dequeue(cqueue, front, rear,size);
    display_cqueue(cqueue, front, rear, size);
    enqueue(cqueue, front, rear, size, 7);
    enqueue(cqueue, front, rear, size, 8);
    display_cqueue(cqueue, front, rear, size);

    return 0;
}
