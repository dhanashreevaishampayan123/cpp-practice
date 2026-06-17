#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"enter the number of elements:"<<endl;
    cin>>n;
    cout<<"enter the elements;"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    int element;
    int count=0;
    cout<<"enter of element to be compared:"<<endl;
    cin>>element;
    
    for(int i=0;i<n;i++)
    {
        if(v[i]>element)
        {
            count++;
        }
    }
    cout<<"number of digits greater than "<<element<<" are:"<<count;
    
}