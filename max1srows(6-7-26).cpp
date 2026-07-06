#include<iostream>
#include<vector>
using namespace std;
int count(vector<vector<int>> &v)
{
    int maxones=-1;
    int rownumber=-1;
    int columns=v[0].size();
    
    
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[0].size();j++)
        {
           if(v[i][j]==1)
           {
                int numberofones=columns-j;
                if(numberofones>maxones)
                {
                    maxones=numberofones;
                    rownumber=i;
                }
                break;
           }
        }
    }
    return rownumber;
    
}


int main()
{
    int n,m;
    cout<<"enter the number of rows:"<<endl;
    cin>>n;
    cout<<"enter the number of columns:"<<endl;
    cin>>m;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0;i<n;i++)
    {
        cout<<"enter the elements for row "<<i<<":"<<endl;
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
     int ans=count(v);
    cout<<"row with maximum number of 1s w.r.t 0 indexing is:"<<ans;
    return 0;
    
}