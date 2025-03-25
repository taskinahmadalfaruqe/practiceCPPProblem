#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a new node at the end
void insert(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;
    
    while (curr) {
        next = curr->next;  // Store next node
        curr->next = prev;  // Reverse the link
        prev = curr;        // Move prev to current node
        curr = next;        // Move to next node
    }
    return prev;  // New head of the reversed list
}

// Driver function
int main() {
    Node* head = nullptr;
    
    // Insert elements into the list
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    cout << "Original List: ";
    printList(head);

    // Reverse the list
    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
