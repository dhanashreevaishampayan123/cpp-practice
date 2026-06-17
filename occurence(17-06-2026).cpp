#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    
    int digit;
    cout<<"enter digit:"<<endl;
    cin>>digit;
    int occurence;
    
    for(int i=0;i<v.size();i++)
    {
        if (v[i]==digit)
        {
            occurence=i;
        }
    }
    cout<<"last occurence:"<<occurence;
    
}