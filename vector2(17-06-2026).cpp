#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"enter elements for vector1:"<<endl;
    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        cout<<endl;
    }
    cout<<"enter elements for vector2:"<<endl;
    vector<int> v2(5);
    for(int i=0;i<5;i++)
    {
        cin>>v2[i];
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<v2[i];
        cout<<endl;
    }
}