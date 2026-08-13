#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[]={12,5,27,8,19};
    int *p=arr;
    int max=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(*(p+i)>max)
        {max=*(p+i);}
    }
    cout<<max;
}