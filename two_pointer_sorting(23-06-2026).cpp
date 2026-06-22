#include<iostream>
#include<vector>
using namespace std;
void sortedarray(vector<int> &v)
{
    int left_ptr=0;
    int right_ptr=v.size()-1;
    while(left_ptr<right_ptr)
    {
        if(v[right_ptr]==0 && v[left_ptr]==1)
        {
            v[left_ptr]=0;
            left_ptr++;
            v[right_ptr]=1;
            right_ptr--;
        }
        if(v[right_ptr]==1)
        {
            right_ptr--;
        }
        if(v[left_ptr]==0)
        {
            left_ptr++;
        }
    }
    cout<<"after sorting:"<<endl;
    for(int i=0;i<v.size();i++)
    {
     cout<<v[i];
     cout<<"\t";
    }
}
int main()
{
    int n;
    cout<<"enter size of vector:"<<endl;
    cin>>n;
  vector<int> v;
  cout<<"enter elements:"<<endl;
  for(int i=0;i<n;i++)
  {
      int element;
      cin>>element;
      v.push_back(element);
  }
  cout<<"before sorting:"<<endl;
  for(int i=0;i<v.size();i++)
    {
     cout<<v[i];
     cout<<"\t";
    }
    cout<<endl;
  sortedarray(v);
}