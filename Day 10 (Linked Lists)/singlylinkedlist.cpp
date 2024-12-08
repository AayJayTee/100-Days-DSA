// Q. Implement a singly linked list with operations for insertion, deletion, and traversal.

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

// Function to insert a node at the beginning of the linked list
void insertNodeatHead(node* &head, int val) {
    node* n = new node(val);  // Create a new node
    n->next = head;           // Link the new node to the current head
    head = n;                 // Update head to the new node
}

// Function to insert a node at a specific position
void insertNode(node* &head, int val, int pos) {
    node* n = new node(val);  // Create a new node
    node* temp = head;
    for (int i = 0; i < pos - 1; i++) {  // Traverse to the desired position
        temp = temp->next;
    }
    n->next = temp->next;     // Link the new node to the next node
    temp->next = n;           // Link the previous node to the new node
}

// Function to delete a node from the end of the linked list
void deleteNodeatTail(node* &head) {
    if (head == NULL) {       // If the list is empty, do nothing
        return;
    }

    if (head->next == NULL) { // If only one node exists
        delete head;          // Delete it and set head to NULL
        head = NULL;
        return;
    }

    node* temp = head;        // Traverse to the second last node
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    node* to_delete = temp->next;  // Save the last node
    temp->next = NULL;        // Unlink the last node
    delete to_delete;         // Delete the last node
}

// Function to delete a node from the beginning of the linked list
void deleteNodeatHead(node* &head) {
    node* to_delete = head;   // Save the current head
    head = head->next;        // Move head to the next node
    delete to_delete;         // Delete the old head
}

// Function to delete a node by value
void deleteNode(node* &head, int val) {
    if (head == NULL) {       // If the list is empty, do nothing
        cout << "List is empty.\n";
        return;
    }

    if (head->data == val) {  // If the value is in the head node
        deleteNodeatHead(head);
        return;
    }

    node* temp = head;
    while (temp->next->data != val) {  // Traverse to the node before the target node
        temp = temp->next;
    }
    if (temp->next == NULL) { // If the value is not found
        cout << "Value not found.\n";
        return;
    }
    node* to_delete = temp->next;  // Save the target node
    temp->next = temp->next->next; // Unlink the target node
    delete to_delete;              // Delete the target node
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
    node* head = NULL;         // Initialize the linked list

    insertNodeatTail(head, 1); // Insert nodes at the tail
    insertNodeatTail(head, 2);
    insertNodeatTail(head, 3);
    display_linked_list(head); // Display the list
    cout << endl;

    insertNodeatHead(head, 4); // Insert a node at the head
    display_linked_list(head);
    cout << endl;

    insertNode(head, 5, 3);    // Insert a node at position 3
    display_linked_list(head);
    cout << endl;

    deleteNode(head, 2);       // Delete the node with value 2
    display_linked_list(head);
    cout << endl;

    deleteNodeatHead(head);    // Delete the head node
    display_linked_list(head);
    cout << endl;

    deleteNodeatTail(head);    // Delete the tail node
    display_linked_list(head);
    return 0;
}
