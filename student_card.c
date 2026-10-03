#include<stdio.h>
struct students
{
    int card_num;
    char name[50];
    int age;
    char type[50];
    float balance;
};
void issue(students s[],int *index)
{
    printf("------------------ISSUE SECTION-------------------------\n");
    int i=*index;
 if(*index>=100)
 {
     printf("NO MORE CARDS CAN BE ISSUED!");
 }
 else
 {
        int ages;
        printf("\nenter the age for student:");
        scanf("%d",&ages);
        
        if(ages<=17 || ages>=30)
        {
         printf("card cannot be issued!");  
         return;
        }
        else
        {
        s[i].age=ages;
        }
        
        printf("enter card number for student:");
        scanf("%d",&s[i].card_num);
        
        printf("enter name for student:");
        scanf("%s",s[i].name);
        
        
        printf("enter card type regular or scholarship:");
        scanf("%s",s[i].type);
        
        printf("enter balanace in the card:");
        scanf("%f",&s[i].balance);
        
        (*index)++;
 }
}
 void recharge(students s[],int n)
 {
     printf("-----------------------RECHARGE SECTION------------------------------\n");
     int num,flag=0,idx;
     printf("enter the card number:");
     scanf("%d",&num);
     
     for(int i=0;i<n;i++)
     {
         if(s[i].card_num==num)
         {
             flag=1;
             idx=i;
             break;
         }
     }
     if(flag)
     {
         printf("card found!\n");
         if(s[idx].balance>3000)
             {
                 printf("we can not recharge your card!\n");
             }
             else
             {
                 float recharge ;
                 printf("enter the amount to be added:");
                 scanf("%f",&recharge);
                 
                 while(s[idx].balance+recharge>3000)
                 {
                     printf("enter lower amount:");
                     scanf("%f",&recharge);
                 }
                 s[idx].balance+=recharge;
             }
     }
     else
     {
         printf("card not found!");
     }
 }
 void modify(students s[],int n )
 {
     printf("-------------------MAKE CHANGES SECTION---------------------\n");
      int num,flag=0,idx;
     printf("enter the card number:");
     scanf("%d",&num);
     
     for(int i=0;i<n;i++)
     {
         if(s[i].card_num==num)
         {
             flag=1;
             idx=i;
             break;
         }
     }
     if(flag)
     {
         int choice;
         printf("card found!");
         printf("\n1.card number\n2.name\n3.age\n4.card type\n5.current balance");
         printf("\nenter your choice:");
         scanf("%d",&choice);
         
         switch(choice)
         {
             case 1:
             {
                 int card;
                 printf("enter the new card number:");
                 scanf("%d",&card);
                 
                 s[idx].card_num=card;
                 break;
             }
             case 2:
             {
                 printf("enter the name:");
                 scanf("%s",s[idx].name);
                 break;
             }
             
             case 3:
             {
              int ages;
                 printf("enter the new age:");
                 scanf("%d",&ages);
                 
                 s[idx].age=ages;
                 break;
                 
             }
             
             case 4:
             {
                 printf("enter the type of card:");
                 scanf("%s",s[idx].type);
                 break;
                
             }
             case 5:
             {
                 float balances;
                 printf("enter the new balance:");
                 scanf("%f",&balances);
                 
                 s[idx].balance=balances;
                 break;
                 
             }
             default:
             printf("invalid choice!");
         }
         
     }
     else
     {
         printf("card not found!");
     }
 }
 void display(students s[],int n)
 {
     printf("------------------------STUDENT INFO---------------------------\n");
     printf("card number    name   age   card type   balance ");
     for(int i=0;i<n;i++)
     {
         printf("%d  %s  %d  %s  %.2f\n",s[i].card_num,s[i].name,s[i].age,s[i].type,s[i].balance);
     }
 }
float total_balance(students s[],int n)
{
    float sum=0;
for(int i=0;i<n;i++)
{
   sum+=s[i].balance; 
}
return sum;
}
int main()
{
    int n;
    printf("enter the number of students:");
    scanf("%d",&n);
    
    struct students s[100];
    for(int i=0;i<n;i++)
    {
        printf("enter card number for student %d:",i+1);
        scanf("%d",&s[i].card_num);
        
        printf("enter name for student %d:",i+1);
        scanf("%s",s[i].name);
        
        printf("enter the age for student %d:",i+1);
        scanf("%d",&s[i].age);
        
        printf("enter card type regular or scholarship:");
        scanf("%s",s[i].type);
        
        printf("enter balanace in the card:");
        scanf("%f",&s[i].balance);
    }
    
    issue(s,&n);
    recharge(s,n);
    modify(s,n);
    display(s,n);
    printf("total balance:%f",total_balance(s,n));
}