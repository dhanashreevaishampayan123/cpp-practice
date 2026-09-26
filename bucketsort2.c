#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void bucketsort(float arr[],int n)
{
    
    float max_ele=arr[0];
    float min_ele=arr[0];
    
    for(int i=0;i<n;i++)
    {
        max_ele=max(arr[i],max_ele);
        min_ele=min(arr[i],min_ele);
    }
    
    float range=(max_ele-min_ele)/n;
    vector<vector<float>> bucket(n,vector<float> ());
    
    for(int i=0;i<n;i++)
    {
        int index=(arr[i]-min_ele)/range;
        float diff=(arr[i]-min_ele)/range-index;
        if(diff==0 && arr[i]!=min_ele)
        {
        bucket[index-1].push_back(arr[i]);    
        }
        else
        {
         bucket[index].push_back(arr[i]);   
        }
        
    }
    
    for(int i=0;i<n;i++)
    {
        if(!bucket[i].empty())
        {
            sort(bucket[i].begin(),bucket[i].end());
        }
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<bucket[i].size();j++)
        {
            arr[k++]=bucket[i][j];
        }
    }
}
int main()
{
    float arr[]={45,20,35,90,87,65,100,22,37,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    
    
    bucketsort(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}