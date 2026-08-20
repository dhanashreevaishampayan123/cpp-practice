#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = nullptr;

    Node *first = new Node;
    first->data = 10;
    head = first;

    Node *second = new Node;
    second->data = 20;
    first->next = second;

    Node *third = new Node;
    third->data = 30;
    second->next = third;

    Node *fourth = new Node;
    fourth->data = 40;
    third->next = fourth;
    fourth->next = nullptr;

    // Reverse the linked list
    Node *prev = nullptr;
    Node *curr = head;
    Node *next;

    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    // Print reversed list
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}