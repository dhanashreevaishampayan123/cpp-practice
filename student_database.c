#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[50];
    float maths,dsa,de;
};


void input(student s[],int n)
{
    printf("\n---------------------CREATE DATABASE---------------------");
     for(int i=0;i<n;i++)
       {
           printf("\nenter the info for student %d:",i+1);
           
           printf("\nroll no:");
           scanf("%d",&s[i].roll);
           
           printf("name:");
           scanf("%s",s[i].name);
           
           printf("marks in maths:");
           scanf("%f",&s[i].maths);
           
           printf("marks in dsa:");
           scanf("%f",&s[i].dsa);
           
           printf("marks in de:");
           scanf("%f",&s[i].de);
       }   
}
void display(student s[], int n)
{
    printf("\n--------------------------DATABASE-----------------------------");
    printf("\n%-10s %-20s %-10s %-10s %-10s",
           "ROLL NO", "NAME", "MATHS", "DSA", "DE");

    printf("\n--------------------------------------------------------------");

    for(int i = 0; i < n; i++)
    {
        printf("\n%-10d %-20s %-10.2f %-10.2f %-10.2f",
               s[i].roll,
               s[i].name,
               s[i].maths,
               s[i].dsa,
               s[i].de);
    }
}

void search(student s[],int n)
{
    printf("\n-------------------SEARCH-----------------------");
    int index=-1;
    int flag=0;
    char names[50];
    printf("\nenter the name:");
    scanf("%s",names);
    for(int i=0;i<n;i++)
    {
    if(strcmp(names,s[i].name)==0)
    {
        flag=1;
        index=i;
        break;
    }
    }
    if(flag)
    {
        printf("\nstudent found!");
        printf("\nroll no:%d",s[index].roll);
        printf("\nMATHS:%f",s[index].maths);
        printf("\nDSA:%f",s[index].dsa);
        printf("\nDE:%f",s[index].de);
    }
    else
    {
        printf("\nstudent not found!");
    }
}

void modify(student s[],int n)
{
    printf("\n-----------------------MODIFY--------------------------");
    int rolls;
    printf("\n enter the roll no:");
    scanf("%d",&rolls);
    
    int index=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].roll==rolls)
        {
            flag=1;
            index=i;
            break;
        }
    }
    if(flag)
    {
        printf("\n1.roll no\n2.name\n3.maths\n4.dsa\n5.de\n");
        printf("enter your choice:");
        int choice;
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            int Rolls;
            printf("\nenter roll number:");
            scanf("%d",&Rolls);
            s[index].roll=Rolls;
            break;
            
            
            case 2:
            printf("enter the name:");
            scanf("%s",s[index].name);
            break;
            
            case 3:
            float math;
            printf("\nenter maths marks:");
            scanf("%f",&math);
            s[index].maths=math;
            break;
            
            case 4:
            float Dsa;
            printf("\nenter dsa marks:");
            scanf("%f",&Dsa);
            s[index].dsa=Dsa;
            break;
            
            case 5:
            float De;
            printf("\nenter de marks:");
            scanf("%f",&De);
            s[index].de=De;
            break;
            
        }
    }
    else
    {
        printf("\nstudent not found!");
    }
}
void sort(student s[],int n)
{
    printf("\n--------------------SORT-----------------------------");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j].roll>s[j+1].roll)
            {
                struct student temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
int main()
{
   int n;
   struct student s[100];
   printf("enter the number of students:");
   scanf("%d",&n);
   
   
   input(s,n);
   display(s,n);
   search(s,n);
   modify(s,n);
   sort(s,n);
   display(s,n);
}