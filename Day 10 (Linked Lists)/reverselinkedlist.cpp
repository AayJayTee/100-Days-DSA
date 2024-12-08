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

void reverse_linked_list(node* &head){
    node* prev_node = NULL;              // Previous node pointer initialized to NULL
    node* current_node = head;           // Current node starts at the head
    node* next_node;                     // Pointer to store the next node

    while (current_node != NULL) {
        next_node = current_node->next;  // Store the next node
        current_node->next = prev_node;  // Reverse the current node's pointer
        prev_node = current_node;        // Move the previous pointer to the current node
        current_node = next_node;        // Move the current pointer to the next node
    }
    head = prev_node;                    // Update the head to the new first node
}

int main() {
    node* head = NULL;                  // Initialize the linked list
    insertNodeatTail(head, 1);          // Insert nodes at the tail
    insertNodeatTail(head, 2);
    insertNodeatTail(head, 3);
    insertNodeatTail(head, 4);
    display_linked_list(head);
    cout<<endl;
    reverse_linked_list(head);
    display_linked_list(head);
}
