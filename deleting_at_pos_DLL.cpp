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
	Node *tail=fifth;
	Node *temp=head;
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
	temp=tail;
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->prev;
	}

	int pos;
	cout<<"\nenter the position of deletion:";
	cin>>pos;

	temp=head;
	for(int i=1; i<pos-1; i++)
	{
		temp=temp->next;
	}

	Node *del=temp->next;
	temp->next=del->next;
	del->next->prev=del->prev;
	delete del;

	temp=head;
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";

	temp=tail;
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->prev;
	}


}