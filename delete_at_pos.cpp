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
    Node *fourth=new Node;
    fourth->data=40;
    third->next=fourth;
    fourth->next=nullptr;
    Node *temp=head;
    int pos;
    cout<<"enter the poistion at which you want to delete node:";
    cin>>pos;
    temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    Node *del=temp->next;
    temp->next=del->next;
    delete del;
    temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    return 0;
}