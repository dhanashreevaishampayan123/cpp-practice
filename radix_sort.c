#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void countsort(vector<int> &v,int pos)
{
    int n=v.size();
    vector<int> freq(10,0);
    
    for(int i=0;i<n;i++)
    {
     freq[(v[i]/pos)%10]++;
    }
    
    for(int i=1;i<10;i++)
    {
        freq[i]+=freq[i-1];
    }
    
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--)
    {
     ans[--freq[(v[i]/pos)%10]]=v[i];
    }
    
    for(int i=0;i<n;i++)
    {
        v[i]=ans[i];
    }
}
void radixsort(vector<int> &v)
{
 int max_ele=INT_MIN;
 for(auto x:v)
 {
     max_ele=max(x,max_ele);
 }
 
 for(int pos=1;max_ele/pos>0;pos*=10)
 {
    countsort(v,pos);
 }

}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    radixsort(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}