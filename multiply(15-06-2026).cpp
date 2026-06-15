Write a function that multiplies two numbers and stores the result in one of the variables using call by reference
#include<iostream>
using namespace std;
int multiply(int &x,int &y)
{
    x*=y;
    return(x);
}
int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    multiply(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
    
    
    
}