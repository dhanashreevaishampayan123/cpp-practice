#include<iostream>
using namespace std;
int addition(int *arr,int index,int n)
{
    if(index==n-1)
    {
        return arr[index];
    }
    else
    {
        return addition(arr,index+1,n)+arr[index];
    }
}
int main()
{
     int arr[]={1,2,3,4,5};
     cout<<addition(arr,0,5);
     return 0;
    
}