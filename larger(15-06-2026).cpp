#Write a function that finds the larger of two numbers using call by value.
#include<iostream>
using namespace std;
void larger(int x,int y)
{
    if(x>y)
    {
        cout<<x<<" is greater than "<<y;
    }
    else
    {
        cout<<y<<" is greater than "<<x;
    }
    
}
int main()
{
    int a,b;
    cout<<"enter value of first number:";
    cin>>a;
    cout<<"enter value of second number:";
    cin>>b;
    larger(a,b);
    
}