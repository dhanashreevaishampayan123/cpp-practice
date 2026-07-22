#include<iostream>
#include<climits>
using namespace std;
int main()
{
 int n;
 cout<<"enter the size of array:";
 cin>>n;
 int a[n];
 cout<<"enter the elements of array :\n";
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
int min_index=0;
for(int i=0;i<n;i++)
{
    int min=INT_MAX;
    for(int j=i;j<n;j++)
    {
        if(a[j]<min)
        {
            min=a[j];
            min_index=j;
        }
    }
    if(a[i]>min)
    {
        int temp=a[i];
        a[i]=min;
        a[min_index]=temp;
    }
}
cout<<"sorted array:";
for(int i=0;i<n;i++)
{
    cout<<a[i]<<"\t";
}
return 0;
}