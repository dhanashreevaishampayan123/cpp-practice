#include<iostream>
using namespace std;
int main()
{
 int n;
 int m;
 cout<<"enter the size of array 1:";
 cin>>n;
 cout<<"enter the size of array 2:";
 cin>>m;
 int a1[n],a2[m];
 cout<<"enter the elements of array 1:\n";
 for(int i=0;i<n;i++)
 {
     cin>>a1[i];
 }
 cout<<"enter the elements of array 2:\n";
 for(int i=0;i<m;i++)
 {
     cin>>a2[i];
 }
 cout<<"intersection of two arrays:\n";
 for(int i=0;i<n;i++)
 {
     bool duplicate=false;
 for(int k=0;k<i;k++)
 {
     if(a1[i]==a1[k])
     {
         duplicate=true;
         break;
     }
 }
 
     bool present=false;
     
     for(int j=0;j<m;j++)
     {
         
       if(a1[i]==a2[j])
       {
           present=true;
           break;
       }
     }
     if(present && !duplicate )
     {
         cout<<a1[i]<<"\t";
     }
 }
}
