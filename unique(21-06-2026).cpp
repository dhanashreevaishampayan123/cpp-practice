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
    int i,j;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                   a[i]=a[j]=-1; 
                }
            }
        }
    int unique;
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            cout<<"unique number is:"<<a[i];
        }
    }
}