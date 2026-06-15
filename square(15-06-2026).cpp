#include<iostream>
using namespace std;
int square(int x)
{
    return (x*x);
}
int main()
{
    int a;
    cout<<"enter a number:";
    cin>>a;
    cout<<"square of the number is:"<<square(a);
}
