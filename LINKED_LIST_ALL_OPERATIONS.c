#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};

void create(struct node **head,int n)
{
	struct node *temp=NULL;
	printf("------------------------CREATE--------------------------------\n");
	int value;
	for(int i=1; i<=n; i++)
	{
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the value for node %d:",i);
		scanf("%d",&value);
		newnode->data=value;
		newnode->next=NULL;

		if(*head==NULL)
		{
			*head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
}

void display(struct node **head,int n)
{
	struct node *temp=*head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}

void insert(struct node **head,int n)
{

	struct node *temp=NULL;
	temp=*head;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	int choice,value;
	printf("INSERT AT:\n1.START\n2.MIDDLE\n3.END");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	printf("\nenter the value to be inserted:");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=NULL;
	if(*head==NULL)
	{
		*head=newnode;
		newnode->next=NULL;
	}
	switch(choice)
	{
	case 1:
	{
		newnode->next=*head;
		*head=newnode;
		break;

	}
	case 2:
	{
		int pos;
		printf("enter the position:");
		scanf("%d",&pos);
		temp=*head;
		for(int i=1; i<pos-1; i++)
		{
			temp=temp->next;
		}
		if(temp->next==NULL)
		{
			newnode->next=NULL;
			temp->next=newnode;
		}
		else
		{
			newnode->next=temp->next;
			temp->next=newnode;
		}
		break;
	}
	case 3:
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=NULL;
		break;
	}
	}
}

void deletion(struct node **head)
{
    struct node *temp=*head;
    int choice;
    printf("\nDELETE AT:\n1.START\n2.MIDDLE\n3.END");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	if(temp->next==NULL)
	{
	    struct node *del=temp;
	    temp=NULL;
	    *head=NULL;
	    free(del);
	}
	switch(choice)
	{
	    case 1:
	    {
	      struct node *del=*head;
	      *head=(*head)->next;
	      free(del);
	       break;  
	    }
	    case 2:
	    {
	       int pos;
	       printf("\n enter the position:");
	       scanf("%d",&pos);
	       for(int i=1;i<pos-1;i++)
	       {
	          temp=temp->next; 
	       }
	       struct node *del=temp->next;
	           temp->next=del->next;
	           free(del);
	        break;  
	    }
	    case 3:
	    {
	     temp=*head;
	     while(temp->next->next!=NULL)
	     {
	         temp=temp->next;
	     }
	     struct node *del=temp->next;
	     temp->next=NULL;
	     free(del);
	      break;    
	    }
	}
}

void rev_display(struct node **head)
{
    struct node *temp=*head;
    if(temp==NULL)
    {
        return;
    }
    else
    {
        rev_display(&temp->next);
        printf("%d ",temp->data);
    }
}
void rev(struct node **head)
{
   struct node *q=*head;
   struct node *r=NULL;
   struct node *curr;
   while(q!=NULL)
   {
       curr=q->next;
       q->next=r;
       r=q;
       q=curr;
   }
   *head=r;
   
}


int main()
{
	int choice;
	struct node *head=NULL;

	int n;
	printf("enter the number of nodes:");
	scanf("%d",&n);

	do
	{
		printf("\n1.CREATE LINKED LIST\n2.DISPLAY LINKED LIST\n3.INSERT VALUE\n4.DELETE VALUE\n5.DISPLAY IN REVERSE ORDER\n6.REVERSE THE LIST\n7.EXIT");
		printf("\nenter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			create(&head,n);
			break;

		case 2:
			display(&head,n);
			break;

		case 3:
			insert(&head,n);
			break;

		case 4:
			deletion(&head);
			break;
			
		case 5:
    		rev_display(&head);
    		break;
		
		case 6:
		    rev(&head);
		    break;
		    
		case 7:
		printf("\nEXITING................!");
		}
	} while(choice!=7);

}