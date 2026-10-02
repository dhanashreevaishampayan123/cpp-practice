#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;

void push(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("----------------------stack overflow!--------------------------\n");
    }
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    printf("value pushed into stack!\n");
    
}
void pop()
{
    if(top==NULL)
    {
        printf("---------------------stack underflow!-----------------------\n");
    }
    else
    {
     struct node *temp=top;
     top=top->next;
     printf("%d popped from stack\n",temp->data);
     free(temp);
    }
}
void display()
{
    if(top==NULL)
    {
        printf("NULL");
    }
    else
    {
    struct node *temp=top;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    display();
    
}