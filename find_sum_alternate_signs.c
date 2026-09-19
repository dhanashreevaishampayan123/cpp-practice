#include<iostream>
using namespace std;
int add(int n,int sum)
{
    if(n==0)
    {
        return sum;
    }
    else if(n%2==0)
    {
         sum-=n;
         return add(n-1,sum);
    }
    else
    {
         sum+=n;
         return add(n-1,sum);
    }
}
int main()
{
    int n;
    int sum=0;
    cout<<add(10,0);
}