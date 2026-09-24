#include<iostream>
#include<vector>
using namespace std;
void combine(string str,int i,string part,int n,vector<string> &result)
{
     if(i==n)
     {
       result.push_back(part);
       return;
     }
     combine(str,i+1,part+str[i],n,result);
     combine(str,i+1,part,n,result);
     
     
 
}
int main()
{
    int n=4;
    string str="abcd";
    vector<string> result;
    combine(str,0,"",4,result);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}