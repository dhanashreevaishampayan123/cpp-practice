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
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sumeven+=v[i];
        }
        else
        {
            sumodd+=v[i];
        }
    }
    int diffrence;
    if(sumeven>sumodd)
    {
        diffrence=sumeven-sumodd;
    }
    else
    {
        diffrence=sumodd-sumeven;
    }
    cout<<"diffrence:"<<diffrence;
}