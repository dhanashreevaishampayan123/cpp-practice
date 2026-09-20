#include<iostream>
using namespace std;
int armstrong(int num)
{
    if(num>=0 && num<=9)
    {
        return num*num*num;
    }
    int sum=(num%10)*(num%10)*(num%10);
    return sum+armstrong(num/10);
}
int main()
{
    int num=153;
    if(armstrong(num)==num)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}