#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int value)
{
    if(top==MAX-1)
    {
        printf("stack overflow!");
    }
    else
    {
        top++;
        stack[top]=value;
        printf("%d pushed into stack!\n",value);
    }
}

int pop()
{
    int popped_element;
    if(top==-1)
    {
        printf("stack underflow!");
        return top;
    }
    else
    {
        popped_element=stack[top];
        top--;
        return (popped_element);
    }
    
}

 bool isfull()
{
 return (top==MAX-1);
}

bool isempty()
{
    return (top==-1);
}

int Top()
{
    if(top==-1)
    {
        printf("stack underflow!");
        return top;
    }
    else
    {
    return stack[top];
    }
}

int main()
{
    int x;
    int choice;
    do{
    printf("1.push element\n2.pop element\n3.is stack empty?\n4.is stack full?\n5.top most element?\n6.exit program!");
    printf("\nenter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter value to be pushed:");
        scanf("%d",&x);
        push(x);
        break;
        
        
        case 2:
        printf("\npopped element is:%d\n",pop());
        break;
        
        case 3:
        if(isempty())
        {
            printf("\nstack is empty!\n");
        }
        else
        {
            printf("\nstack is not empty!\n");
        }
        break;
        
        case 4:
        if(isfull())
        {
            printf("\nstack is full!\n");
        }
        else
        {
            printf("\nstack is not full!\n");
        }
        break;
        
        case 5:
        printf("%d\n",Top());
        break;
        
        case 6:
        printf("exiting..........");
        break;
        
        default:
        printf("wrong choice,enter again!\n");
        break;
        
    }
    }while(choice !=6);
    }
    