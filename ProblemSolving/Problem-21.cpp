#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list node
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to reverse the linked list
ListNode *reverseList(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;

    while (curr != NULL)
    {
        ListNode *nextNode = curr->next; // Save next node
        curr->next = prev;               // Reverse link
        prev = curr;                     // Move prev forward
        curr = nextNode;                 // Move curr forward
    }

    return prev; // New head of reversed list
}

// Helper function to print the linked list
void printList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Helper function to create a linked list from an array
ListNode *createList(int arr[], int size)
{
    if (size == 0)
        return NULL;
    ListNode *head = new ListNode(arr[0]);
    ListNode *current = head;
    for (int i = 1; i < size; i++)
    {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ListNode *head = createList(arr, size);

    cout << "Original List: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
