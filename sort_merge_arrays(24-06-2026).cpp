#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"enter the length for array1:"<<endl;
    cin>>n;
    vector<int> v1;
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }
    int m;
    cout<<"enter the length for array2 :"<<endl;
    cin>>m;
    vector<int> v2;
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<m;i++)
    {
        int ele;
        cin>>ele;
        v2.push_back(ele);
    }
    vector<int> ans;
    int i=0;int j=0;
    while(i<n && j<m)
    {
          if(v1[i]<=v2[j])
          {
            ans.push_back(v1[i]);
            i++;
          }
          else
          {
              ans.push_back(v2[j]);
              j++;
          }
          
      }
      while(i<n)
          {
            ans.push_back(v1[i]);  
            i++;
          }
          while(j<m)
          {
            ans.push_back(v2[j]); 
            j++;
          }
      cout<<"sorted and merged array is:"<<endl;
      for(int i=0;i<ans.size();i++)
      {
          cout<<ans[i]<<"\t";
      }

    return 0;
}