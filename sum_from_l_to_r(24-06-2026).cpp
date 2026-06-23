#include<iostream>
#include<vector>
using namespace std;
void SumFrom_L_to_R(vector<int> &v)
{
    // 1 based indexing
    int l,r;
    cout<<"enter l:"<<endl;
    cin>>l;
    cout<<"enter r:"<<endl;
    cin>>r;
    int sum=0;
    for(int i=l-1;i<r;i++)
    {
      sum+=v[i];  
    }
    cout<<"sum is:"<<sum;
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
 SumFrom_L_to_R(v);
  
}