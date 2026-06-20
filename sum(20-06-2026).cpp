#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of array:";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum;
    cout<<"enter sum:"<<endl;
    cin>>sum;
    int count=0;
    int i,j;
    for(i=0;i<n;i++)
    {
         int current=a[i];
        for(j=i+1;j<n;j++)
        {
           if((a[i]+a[j])==sum) 
           {
            count++;   
           }
        }
    }
    cout<<"number of pairs are:"<<count;
}