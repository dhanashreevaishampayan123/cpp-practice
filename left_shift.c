#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of array:";
    cin>>n;
    int a[n];
    cout<<"enter elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp=a[0];
    for(int i=0;i<n-1;i++)
    {
     a[i]=a[i+1];   
    }
    a[n-1]=temp;
    cout<<"right shifted array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
    
}
