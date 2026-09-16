#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,value;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    
    
    struct node *head=NULL;
    if(n==0)
    {
        printf("no nodes will be created:)");
    }
    else
    {
    struct node *curr=(struct node*)malloc(sizeof(struct node));
    
    printf("enter the data for node 1:");
    scanf("%d",&value);
    curr->data=value;
    head=curr;
    
    for(int i=2;i<=n;i++)
    {
       printf("enter the data for node %d:",i);
       scanf("%d",&value);
       struct node *newnode=(struct node*)malloc(sizeof(struct node));
       newnode->data=value;
       curr->next=newnode;
       curr=newnode;
    }
    curr->next=NULL;
    }
    
    
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf("\t");
        temp=temp->next;
    }
}