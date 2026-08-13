#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};
    int *p=arr;
    int *left=arr;
    int *right=&arr[4];
    while(left<right)
    {
        int temp=*left;
        *left=*right;
        *right=temp;
        left++;
        right--;
    }
    for(int i=0;i<5;i++)
    {
        cout<<*(p+i)<<" ";
    }
}