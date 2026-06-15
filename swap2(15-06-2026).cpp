Write a program to swap two numbers using call by reference.
#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
    
}
int main()
{
    int a,b;
    cout<<"enter value of first number:";
    cin>>a;
    cout<<"enter value of second number:";
    cin>>b;
    swap(a,b);
    cout<<"value of first number is:"<<a<<endl;
    cout<<"value of second number is:"<<b;
}