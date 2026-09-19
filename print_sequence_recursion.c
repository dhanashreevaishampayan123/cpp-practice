#include<iostream>
using namespace std;
void sequence(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        sequence(n-1);
        cout<<n<<" ";
    }
     
    
}
int main()
{
    int n=20;
    sequence(n);
}