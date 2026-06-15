#Write a function to double a number using call by reference.
#include<iostream>
using namespace std;
int doublenum(int &x)
{
    x*=2;
    return x;
    
}
int main()
{
    int a;
    cout<<"enter a number:";
    cin>>a;
    cout<<"doubled number is:"<<doublenum(a);
    
}