#find largest element in the array
#include<iostream>
using namespace std;
int main()
{int n;
  int array[n];
  cout<<"enter the number of elements:"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>array[i];
  }
  int max=0;
  for(int i=0;i<n;i++)
  {
      if(max<array[i])
      {
          max=array[i];
      }
  }
  cout<<"maximum value is:"<<max;
}