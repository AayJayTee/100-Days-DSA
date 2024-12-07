#include <iostream>
using namespace std;

void enqueue(int deque[], int &front, int &rear, int size, int e, int choice) {
    if (rear - front + 1 == size) { 
        cout << "Deque has reached its max limit. Please remove elements before enqueueing.\n";
        return;
    }

    if (front == -1 && rear == -1) {    // First element insertion
        front = 0;
        rear = 0;
        deque[front] = e;
    } 
    else if (choice == 1) {             // Insert at the front
        if (front == 0) {
            for (int i = rear; i >= front; i--) {
                deque[i + 1] = deque[i];
            }
            rear++;                     // Increment rear as elements are shifted
        } else {
            front--;                    // Move front backward
        }
        deque[front] = e;               // Insert the element
    } 
    else if (choice == 2) {             // Insert at the rear
        rear++;
        deque[rear] = e;
    }
}

void dequeue(int deque[], int &front, int &rear, int choice) {
    if (front == -1 && rear == -1) { // Queue is empty
        cout << "Queue is empty, please add elements.\n";
        return;
    }
    else if (front == rear) {                // Queue becomes empty after removing the only element
        front = -1;
        rear = -1;
    } 
    else if (choice == 1) {                 // Remove from the front
        front++;
    } 
    else if (choice == 2) {                 // Remove from the rear
        rear--;
    }
}

void max_element(int deque[],int &front,int &rear,int k){
    int max=deque[front];
    for(int i=front;i<front+k;i++){
        if(deque[i]>max){
            max=deque[i];
        }
    }
    cout<<max<<" ";
}

void display_deque(int deque[], int front, int rear) {
    if (front == -1 && rear == -1) {
        cout << "Deque is empty.\n";
        return;
    }

    cout << "The deque is: ";
    for (int i = front; i <= rear; i++) {
        cout << deque[i] << " ";
    }
    cout << endl;
}

int main() {
    int size,n,k;
    cout<<"Enter max length of deque: ";
    cin>>size;
    int deque[size];
    int front = -1, rear = -1;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter size of sliding window: ";
    cin>>k;
    int beg=0;
    int end=beg+k;
    int j=0;
    while(end<=n){
        if(front==-1 && rear==-1){
            for(int i=beg;i<end;i++){
                enqueue(deque,front,rear,size,arr[i],2);
            }
        }
        else{
            enqueue(deque,front,rear,size,arr[end-1],2);
            dequeue(deque,front,rear,1);
        }
        max_element(deque,front,rear,k);
        beg++;
        end++;
    }
    return 0;
    
}
