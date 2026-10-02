#include<stdio.h>
#define MAX 5
int queue[MAX];
int front =-1;
int rear=-1;

void enqueue()
{
    int value;
    if(rear==MAX-1)
    {
        printf("queue overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("enter the value:");
        scanf("%d",&value);
        rear++;
        queue[rear]=value;
        printf("\n%d pushed into queue\n",value);
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("queue underflow\n");
    }
    else
    {
        printf("\n%d removed from queue\n",queue[front]);
        front++;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
    }
}

void peek()
{
    if(front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
     printf("\nelement at the front is:%d\n",queue[front]);   
    }
}

void display()
{
    if(front ==-1 )
    {
      printf("queue is empty\n");  
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
          printf("%d ",queue[i]);  
        }
    }
}

int main()
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    peek();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    
}
