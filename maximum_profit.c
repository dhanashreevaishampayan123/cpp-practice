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

int max_profit=INT_MIN;
int profit;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        profit=a[j]-a[i];
        if(max_profit<profit)
        {
            max_profit=profit;
        }
    }
}
if(max_profit<0)
{
    cout<<"maximum profit=0";
}
else
{
cout<<"maximum profit ="<<max_profit;
}
 return 0;
}
