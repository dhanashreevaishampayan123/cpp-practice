#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue()
{
    int value;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("queue overflow!\n");
    }
    else
    {
    printf("enter the value:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(front==NULL)
    {
     front=newnode;
     rear=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    printf("%d pushed into queue!\n",value);
    }
}

void dequeue()
{
    if(front==NULL)
    {
        printf("\nqueue underflow!\n");
    }
    else
    {
        struct node *temp=front;
        front=front->next;
        printf("\n%d removed from queue!",temp->data);
        free(temp);
    }
}

void display()
{
    if(front==NULL)
    {
        printf("queue is empty!");
    }
    else
    {
        struct node *temp=front;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

void peek()
{
    if(front==NULL)
    {
        printf("queue is empty!");
    }
    else
    {
        printf("%d is the front element!\n",front->data);
    }
}
int main()
{
   enqueue();
   enqueue();
   enqueue();
   enqueue();
   enqueue();
   peek();
   display();
   dequeue();
   dequeue();
   dequeue();
   dequeue();
   dequeue();
   dequeue();
   
   
   
   
}