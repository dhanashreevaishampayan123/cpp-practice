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


for(int i=0;i<n;i++)
{
    bool leader=true;
    for(int j=n-1;j>i;j--)
    {
     if(a[i]<=a[j])   
     {
      leader=false;   
      break;
     }
    }
    if(leader)
    {
        cout<<"\n"<<a[i]<<" is a leader";
    }
}
 return 0;
}
