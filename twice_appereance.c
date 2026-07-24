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
 bool found;
for(int i=0;i<n;i++)
{
    found=false;
    for(int j=i+1;j<n;j++)
    {
     if(a[i]==a[j])
     {
         found=true;
         break;
     }
    }
    if(found)
    {
        break;
    }
}
if(found)
{
    cout<<"yes";
}
else
{
    cout<<"no";
}
return 0;
}