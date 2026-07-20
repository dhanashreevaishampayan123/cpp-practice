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

 int smallest=a[0];
 int secondsmallest=INT_MAX;
 for(int i=1;i<n;i++)
 {
     
         if(smallest>a[i])
         {
             secondsmallest=smallest;
             smallest=a[i];
         }
         else if(a[i]<secondsmallest && a[i]>smallest)
         {
             secondsmallest=a[i];
         }
 }
 if(secondsmallest==INT_MAX)
 {
 cout<<"second smallest element does not exist.";
 }
 else
 {
 cout<<"second smallest element is :"<<secondsmallest;
 }
return 0;
}
