#find the element in an array. If not found return -1 or else return index.
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the number of elements:"<<endl;
  cin>>n;
  int array[n];
  
  cout<<"enter:"<<endl;
  for(int i=0;i<n;i++)
  {
      cin>>array[i];
  }
  int num;
  int ans=-1;
  cout<<"enter a number to be searched in array:";
  cin>>num;
  for(int i=0;i<n;i++)
  {
      if(num==array[i])
      {
       ans=i;
       break;
      }
      
  }
  cout<<ans;
}