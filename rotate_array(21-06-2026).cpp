#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of array:";
    cin>>n;
    int temp;
    int a[n];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k,r;
    cout<<"enter steps:"<<endl;
    cin>>k;
    cout<<"original array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    for(r=1;r<=k;r++)
    {
        temp=a[0];
        for(int i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
    cout<<"the rotated array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    
}