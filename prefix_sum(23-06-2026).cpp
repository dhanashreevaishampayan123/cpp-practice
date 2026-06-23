#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> v;
  int n;
  cout<<"enter the number of elements:"<<endl;
  cin>>n;
  cout<<"enter the elements:"<<endl;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
  }
  for(int i=1;i<n;i++)
  {
      v[i]=v[i]+v[i-1];
  }
  cout<<"array of sum:"<<endl;
  for(int i=0;i<n;i++)
  {
      cout<<v[i];
      cout<<endl;
  }
}