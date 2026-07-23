#include<iostream>
using namespace std;
int main()
{
    int n,q;
    cout<<"enter length of array:";
    cin>>n;
    string stringlist[n];
    cout<<"enter strings:\n";
    for(int i=0;i<n;i++)
    {
        cin>>stringlist[i];
    }
    cout<<"enter the number of queries;";
    cin>>q;
    string queries[q];
    cout<<"enter the queries:\n";
    for(int i=0;i<q;i++)
    {
        cin>>queries[i];
    }
    int results[q];
    for(int i=0;i<q;i++)
    {int count=0;
        string str=queries[i];
        for(int j=0;j<n;j++)
        {
        if(str==stringlist[j])
        {
         count++;   
        }    
        }
        results[i]=count;
    }
    cout<<"the result array:\n";
    for(int i=0;i<q;i++)
    {
        cout<<results[i]<<"\t";
    }
}