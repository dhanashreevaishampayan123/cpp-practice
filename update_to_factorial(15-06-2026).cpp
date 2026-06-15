#include<iostream>
using namespace std;
void update_to_factorial(int &x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
 fact=fact*i;
    }
    x=fact;
}
int main()
{
    int a;
    cout<<"enter a number:";
    cin>>a;
    cout<<"before updating:"<<a<<endl;
    update_to_factorial(a);
    cout<<"after updating:"<<a;
    
    
}