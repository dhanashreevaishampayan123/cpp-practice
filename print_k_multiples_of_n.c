#include<iostream>
using namespace std;
void sequence(int n,int k)
{
    if(k==0)
    {
        return;
    }
    else
    {
        sequence(n,k-1);
        cout<<(n*k)<<" ";
        
    }
}
int main()
{
    int n=3;
    int k=5;
    sequence(n,k);
}