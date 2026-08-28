#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
int main()
{
    Node *first=new Node;
    Node *second=new Node;
    Node *third=new Node;
    Node *fourth=new Node;
    
    first->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;
    
    first->next=second;
    second->next=third;
    third->next=fourth;
    
    Node *head=first;
    Node *tail=fourth;
    Node *temp=head;
    tail->next=head;
    do 
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
    
    
    Node *newnode=new Node;
    newnode->data=50;
   tail->next=newnode;
   tail=newnode;
   tail->next=head;
   temp=head;
    cout<<"\n";
    do 
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
}