#include <iostream>
#include<vector>
using namespace std;
bool sum(vector<int> &v1)
{
  int sum;
    cout<<"enter sum:"<<endl;
    cin>>sum;
    for(int i=0;i<v1.size();i++)
    {
        for(int j=i+1;j<v1.size();j++)
        {
         if(v1[i]+v1[j]==sum)   
         {
             return true;
         }
        }
    }
    return false;
}
int main() 
{
    int n;
    cout<<"enter the length for array:"<<endl;
    cin>>n;
    vector<int> v1;
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }
    bool ans=sum(v1);
    if(ans==true)
    {
        cout<<"yes";
    }
    if(ans==false)
    {
        cout<<"no";
    }
    
    return 0;
}