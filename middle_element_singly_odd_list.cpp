#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
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

	Node *head=first;
	Node *slow=head;
	Node *fast=head;
	
	
	while(fast!=nullptr && fast->next!=nullptr)
	{
	    slow=slow->next;
	    fast=fast->next->next;
	}
	 cout<<slow->data;
}