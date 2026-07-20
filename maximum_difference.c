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

int diff=INT_MIN;
for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
  {
      if(a[j]-a[i]>diff)
      {
          diff=a[j]-a[i];
      }
  }
}
cout<<"maximum difference is:"<<diff;
 return 0;
}
