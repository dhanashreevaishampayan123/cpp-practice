#include<stdio.h>
#define MAX 4
int railway[MAX];
int front=-1;
int rear=-1;


void add_to_list()
{
  if(rear==MAX-1)
  {
    printf("queue is full!\n");   
  }
  else
  {
      int value;
      printf("enter the position in queue:");
      scanf("%d",&value);
      if(front==-1)
      {
          front =0;
      }
      rear++;
      railway[rear]=value;
  }
    
}

void serve()
{
    if(front==-1)
    {
        printf("queue is empty!");
    }
    else
    {
        printf("\nwe are serving passenger: %d",railway[front]);
        front++;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
    }
}

void display_passanger()
{
 if(front==-1)
    {
        printf("queue is empty!");
    }
    else
    {
        printf("\nnext passanger to be served is :%d",railway[front]);
    }
}

void display_recent_passanger()
{
  if(front==-1)
    {
        printf("queue is empty!");
    }
    else
    {
        printf("\nrecently added passanger:%d",railway[rear]);
    }
}

void display_order()
{
   if(front==-1)
    {
        printf("queue is empty!");
    }
    else
    {
        printf("\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",railway[i]);
        }
    }
}

int main()
{
  add_to_list();
  add_to_list();
  add_to_list();
  add_to_list();
  add_to_list();
  display_order();
  
  serve();
  display_order();
  serve();
  
  display_passanger();
  display_order();
  
  
  display_recent_passanger();
  
  
}