// Q. Write a program to reverse a linked list.

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

// Function to display the linked list
void display_linked_list(node* &head) {
    cout<<"The linked list structure is: ";
    node* temp = head;
    while (temp != NULL) {     // Traverse through the list
        cout << temp->data << " "; // Print each node's data
        temp = temp->next;
    }
}

void merge_linked_lists(node* &head1, node* &head2) {
    // If the first list is empty, point it to the second list
    if (head1 == NULL) {
        head1 = head2;
    }

    // If the second list is empty, there's nothing to merge, so return
    if (head2 == NULL) {
        return;
    }

    // Traverse to the end of the first linked list
    node* temp = head1;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link the last node of the first list to the head of the second list
    temp->next = head2;
}


int main() {
    node* head1 = NULL;                  // Initialize the linked list
    insertNodeatTail(head1, 1);          // Insert nodes at the tail
    insertNodeatTail(head1, 2);
    insertNodeatTail(head1, 3);
    insertNodeatTail(head1, 4);
    display_linked_list(head1);
    cout<<endl;
    node* head2 = NULL;
    insertNodeatTail(head2, 5);          // Insert nodes at the tail
    insertNodeatTail(head2, 6);
    insertNodeatTail(head2, 7);
    insertNodeatTail(head2, 8);
    display_linked_list(head2);
    cout<<endl;
    merge_linked_lists(head1,head2);
    display_linked_list(head1);
}
