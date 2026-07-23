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
 int max_length=INT_MIN;
 for(int i=0;i<n;i++)
 {
     int length=1;
     int element=a[i];
     bool found=true;
     while(found)
     {
         found =false;
     for(int j=0;j<n;j++)
     {
         if(a[j]==(element+1))
         {
             length++;
             element++;
             found=true;
             break;
         }
     }
     }
     if(max_length<length)
     {
         max_length=length;
     }
 }
 cout<<"length of longest consecutive series is:"<<max_length;
}