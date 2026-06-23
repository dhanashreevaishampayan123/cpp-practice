#include<iostream>
#include<vector>
using namespace std;
bool equalSum(vector<int> &v)
{
    int total_sum=0;
    for(int i=0;i<v.size();i++)
    {
        total_sum+=v[i];
    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++)
    {
        prefix_sum+=v[i];
        int suffix_sum=total_sum-prefix_sum;
        if(suffix_sum==prefix_sum)
        {
            return true;
        }
    }
    return false;
}

int main()
{
 int n;
 vector<int> v;
 cout<<"enter length of array:"<<endl;
 cin>>n;
 cout<<"enter the elements:"<<endl;
 for(int i=0;i<n;i++)
 {
     int ele;
     cin>>ele;
     v.push_back(ele);
     
 }
  bool result=equalSum(v);
 if(result==true)
 {
     cout<<"conclusion:the array can be divided into subparts";
 }
 else
 {
     cout<<"conclusion:the array cannot divied into subparts";
 }
}