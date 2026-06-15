Write a program to swap two numbers using call by value.
#include<iostream>
using namespace std;
void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"value of first number is:"<<x<<endl;
    cout<<"value of second number is:"<<y;
}
int main()
{
    int a,b;
    cout<<"enter value of first number:";
    cin>>a;
    cout<<"enter value of second number:";
    cin>>b;
    swap(a,b);
}