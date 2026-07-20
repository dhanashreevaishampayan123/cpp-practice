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

 for( int i=0;i<n;i++)
 {
     bool duplicate=false;
     for(int j=0;j<i;j++)
     {
         if(a[i]==a[j])
         {
             duplicate=true;
             break;
         }
     }
     int count=0;
     for(int k=0;k<n;k++)
     {
         if(a[i]==a[k])
         {
             count++;
         }
     }
     if(!duplicate)
     {
         cout<<"\nfrequency of "<<a[i]<<" in the array is:"<<count;
     }
 }
return 0;
}
