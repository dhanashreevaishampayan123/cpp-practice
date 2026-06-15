#Write a function to add 10 to a number using call by reference. Check whether the original number changes.
#include<iostream>
using namespace std;
int add10(int &x)
{
    x=x+10;
    cout<<x<<endl;
    return x;
    
}
int main()
{
    int a;
    cout<<"enter a number:";
    cin>>a;
    cout<<"before function call:"<<a<<endl;
    add10(a);
    cout<<"after function call:"<<a;
    
}