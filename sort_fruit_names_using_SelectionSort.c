#include<iostream>
using namespace std;
int main()
{
   int n;
   n=6;
   string arr[]={"papaya","lime","watermelon","apple","mango","kiwi"};
   
   for(int i=0;i<n-1;i++)
   {
       int min_idx=i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]<arr[min_idx])
           {
            min_idx=j; 
           }
       }
       if(i!=min_idx)
       {
       string name=arr[i];
       arr[i]=arr[min_idx];
       arr[min_idx]=name;
       }
   }
   for(int j=0;j<n;j++)
   {
       cout<<arr[j]<<" ";
   }
}