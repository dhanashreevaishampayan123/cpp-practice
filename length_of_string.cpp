#include<iostream>
using namespace std;

int main()
{
    char str[]="hello";
    char *p=str;
    int count=0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    cout<<count;
}