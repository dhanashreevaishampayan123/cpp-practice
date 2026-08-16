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
Node *newNode=new Node;
newNode->data=5;
newNode->next=first;
Node *head=newNode;
Node *temp=head;
while(temp!=nullptr)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}

}