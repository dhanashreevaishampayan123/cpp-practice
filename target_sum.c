#include<iostream>
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
int target;
int index1=-1,index2=-1;
cout<<"enter target sum:";
cin>>target;
for(int i=0;i<n;i++)
{ bool found=false;
    for(int j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==target)
        {
        found=true;
         index1=i;
         index2=j;
         break;
        }
    }
    if(found)
    {
        break;
    }
}
if( index1==-1 && index2==-1)
{
    cout<<"no pair found";
}
else
{
cout<<"index 1="<<index1;
cout<<"\nindex 2="<<index2;
}
return 0;
}