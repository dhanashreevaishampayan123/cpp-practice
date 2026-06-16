#calculate sum of all elements of array
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
  int sum=0;
  for(int i=0;i<n;i++)
  {
      sum=sum+array[i];
  }
  cout<<"the sum of elements of array is:"<<sum;
}