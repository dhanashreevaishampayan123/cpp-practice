#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *next;
	Node *prev;
};
int main()
{
	Node *first=new Node;
	Node *second=new Node;
	Node *third=new Node;
	Node *fourth=new Node;
	Node *fifth=new Node;

	first->data=10;
	second->data=20;
	third->data=30;
	fourth->data=40;
	fifth->data=50;

	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=nullptr;

	first->prev=nullptr;
	second->prev=first;
	third->prev=second;
	fourth->prev=third;
	fifth->prev=fourth;
	
	Node *head=first;
	Node *temp=head;
	Node *tail=fifth;
	
	cout<<"forward traverse before inserting:\n";
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}

	cout<<"\nbackward traverse before inserting:\n";
	Node *temp_end=tail;
	while(temp_end!=nullptr)
	{
		cout<<temp_end->data<<" ";
		temp_end=temp_end->prev;
	}

	temp=head;
	while(temp->next!=nullptr)
	{
		temp=temp->next;
	}

	Node *newnode=new Node;
	newnode->data=60;
	temp->next=newnode;
	newnode->prev=temp;
	newnode->next=nullptr;
	tail=newnode;
	
	temp=head;
	cout<<"\nforward traverse after inserting:\n";
	while(temp!=nullptr)
	{
	    cout<<temp->data<<" ";
	    temp=temp->next;
	}
	
	cout<<"\nbackward traverse after inserting:\n";
	temp_end=tail;
	while(temp_end!=nullptr)
	{
	    cout<<temp_end->data<<" ";
	    temp_end=temp_end->prev;
	}
}