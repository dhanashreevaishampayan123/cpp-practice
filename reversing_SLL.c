#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

/*void reverse(struct node *head)
{
    struct node *temp=head;
    if(temp==NULL)
    {
        return;
    }
    reverse(temp->next);
    printf("%d\t",temp->data);
}*/
int main()
{
    int n,value;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    struct node *head=NULL;
    struct node *temp;
    struct node *newnode;
    
    for(int i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data of node %d:",i);
        scanf("%d",&value);
        
        newnode->data=value;
        
        if(head==NULL)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        newnode->next=NULL;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf("\t");
        temp=temp->next;
    }
    printf("\n");
    
    struct node *p=NULL;
    struct node *curr=head;
    struct node *r;
    
    while(curr!=NULL)
    {
        r=curr->next;
        curr->next=p;
        p=curr;
        curr=r;
    }
    
    head=p;
    
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        printf("\t");
        temp=temp->next;
    }
    printf("\n");
    
    
   
    
    
    return 0;
}