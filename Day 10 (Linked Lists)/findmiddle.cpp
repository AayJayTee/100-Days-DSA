// Q.  Solve the "find the middle element of a linked list" problem.

#include <iostream>
using namespace std;

// Class representing a node in the linked list
class node {
    public:
    int data;     // Data stored in the node
    node* next;   // Pointer to the next node

    // Constructor to initialize a node with a value
    node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert a node at the end of the linked list
void insertNodeatTail(node* &head, int val) {
    node* n = new node(val);  // Create a new node

    if (head == NULL) {       // If list is empty, make new node the head
        head = n;
        return;
    }

    node* temp = head;        // Traverse to the end of the list
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;           // Link the last node to the new node
}

void findMiddle(node* &head){
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<"The middle element is: ";
    cout<<slow->data;
}

// Function to display the linked list
void display_linked_list(node* &head) {
    cout<<"The linked list structure is: ";
    node* temp = head;
    while (temp != NULL) {     // Traverse through the list
        cout << temp->data << " "; // Print each node's data
        temp = temp->next;
    }
}

int main() {
    node* head = NULL;                  // Initialize the linked list
    insertNodeatTail(head, 1);          // Insert nodes at the tail
    insertNodeatTail(head, 2);
    insertNodeatTail(head, 3);
    insertNodeatTail(head, 4);
    insertNodeatTail(head, 5);
    insertNodeatTail(head, 6);
    insertNodeatTail(head, 7);
    display_linked_list(head);
    cout<<endl;
    findMiddle(head);
}
