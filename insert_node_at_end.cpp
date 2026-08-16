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
first->data=10;
second->data=20;
third->data=30;
first->next=second;
second->next=third;
third->next=nullptr;
Node *head=first;
Node *temp=head;
Node *lastNode=new Node;
lastNode->data=40;
while(temp->next!=nullptr)
{
  temp=temp->next;  
}
temp->next=lastNode;
lastNode->next=nullptr;
Node *temp2=head;
while(temp2!=nullptr)
{
    cout<<temp2->data<<" ";
    temp2=temp2->next;  
}
}