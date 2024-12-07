// Q. Solve the "reverse first k elements of a queue" problem.

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

void reverse(int queue[],int front,int k){                     //reverse function to reverse the first k elements
    int beg=front;
    int end=front+k-1;
    while(beg<end){
        swap(queue[beg],queue[end]);
        beg++;
        end--;
    }
}

int main() {
    int size,k;
    cout << "Enter max length of queue: ";
    cin >> size;
    int queue[size];
    int front = -1, rear = -1;
    enqueue(queue, front, rear, size, 5);
    enqueue(queue, front, rear, size, 2);
    enqueue(queue, front, rear, size, 9);
    enqueue(queue, front, rear, size, 1);
    enqueue(queue, front, rear, size, 8);
    enqueue(queue, front, rear, size, 6);
    display_queue(queue, front, rear);
    cout<<"Enter the value of k: ";
    cin>>k;
    reverse(queue,front,k);
    display_queue(queue, front, rear);
    return 0;
}
