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

//Function to detect if cycle is present
bool isCyclePresent(node* &head){
    node* fast = head;   // Fast pointer starts at the head
    node* slow = head;   // Slow pointer starts at the head
    
    while(fast != NULL && fast->next != NULL){  // Loop until fast pointer reaches the end
        fast = fast->next->next;  // Move fast pointer two steps ahead
        slow = slow->next;        // Move slow pointer one step ahead
        
        if(fast == slow){  // If they meet, a cycle is present
            return true;
        }
    }
    return false;  // No cycle found
}


// Function to create a cycle in the linked list for testing
void createCycle(node* &head) {
    if (head == NULL) return;
    
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;  // Traverse to the last node
    }
    
    // Create a cycle by linking the last node to a node (e.g., the second node)
    temp->next = head->next;  // Create a cycle by making the last node point to the second node
}

int main() {
    node* head = NULL;                  // Initialize the linked list
    insertNodeatTail(head, 1);          // Insert nodes at the tail
    insertNodeatTail(head, 2);
    insertNodeatTail(head, 3);
    insertNodeatTail(head, 4);
    display_linked_list(head);
    cout<<endl;
    if(isCyclePresent(head)){
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle is not present";
    }
    createCycle(head);
    cout<<endl;
    cout<<"Cycle has been created";
    cout<<endl;
    if(isCyclePresent(head)){           //Using the function to create a cycle
        cout<<"Cycle is present";
    }
    else
        cout<<"Cycle is not present";
}
