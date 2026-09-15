#include<iostream>
using namespace std;
int sum(int n)
{
    if(n>=0 && n<=9)
    {
      return n;  
    }
    else
    {
    return sum(n/10)+n%10;
    }
}
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"\nthe sum is:"<<sum(n);
    return 0;
}