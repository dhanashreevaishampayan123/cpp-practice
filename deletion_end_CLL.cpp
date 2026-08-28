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
    
    temp=head;
    if(head==tail)
    {
        Node *del=head;
        delete del;
        head=nullptr;
        tail=nullptr;
    }
    else
    {
    while(temp->next->next!=head)
    {
        temp=temp->next;
    }
     Node *del=temp->next;
    tail=temp;
    tail->next=head;
    delete del;
    }
    
   
    temp=head;
    
    cout<<"\n";
    do 
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
}