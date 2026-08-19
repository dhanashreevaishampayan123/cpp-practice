#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main() {
    Node *head=nullptr;
    Node *first =new Node;
    first->data=10;
    head=first;
    Node *second=new Node;
    second->data=20;
    first->next=second;
    Node *third=new Node;
    third->data=30;
    second->next=third;
    third->next=nullptr;
    Node *newnode=new Node;
    newnode->data=40;
    Node *temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=nullptr;
    head=first->next;
    delete first;
    temp=head;
    
    while(temp!=nullptr)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }


    return 0;
}