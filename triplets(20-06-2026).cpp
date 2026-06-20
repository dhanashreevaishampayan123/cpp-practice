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
    int i,j,k;
    for(i=0;i<n;i++)
    {
         int current=a[i];
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
           if((a[i]+a[j]+a[k])==sum) 
           {
            count++;   
           }
            }
        }
    }
    cout<<"number of triplets are:"<<count;
}