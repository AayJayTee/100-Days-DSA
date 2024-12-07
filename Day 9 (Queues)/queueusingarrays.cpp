#include <iostream>
using namespace std;

void enqueue(int queue[], int &front, int &rear, int size, int e) {
    if (rear == size - 1) { 
        cout << "Queue has reached its max limit. Please remove elements before enqueueing.\n";
        return;
    }

    else if (front == -1 && rear == -1) {
        rear = 0;
        front = 0;
    }
    else {
        rear++;
    }
    queue[rear] = e;
}

void dequeue(int queue[], int &front, int &rear) {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty, please add elements.\n";
        return;
    }
    else if (front == rear) {                                   // Queue becomes empty
        front = -1;
        rear = -1;
    } 
    else {
        front++;
    }
}

void display_queue(int queue[], int front, int rear) {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "The queue is: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter max length of queue: ";
    cin >> size;
    int queue[size];
    int front = -1, rear = -1;
    enqueue(queue, front, rear, size, 5);
    enqueue(queue, front, rear, size, 2);
    enqueue(queue, front, rear, size, 9);
    enqueue(queue, front, rear, size, 1);
    display_queue(queue, front, rear);
    dequeue(queue, front, rear);
    display_queue(queue, front, rear);
    dequeue(queue, front, rear);
    display_queue(queue, front, rear);
    return 0;
}
