#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &v)
{
    int n=v.size();
    for(int i=0;i<n-1;i++)
    {
        int swaps=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                swaps++;
            }
        }
        if(swaps==0)
            {
                break;
            }
        
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    bubble_sort(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}