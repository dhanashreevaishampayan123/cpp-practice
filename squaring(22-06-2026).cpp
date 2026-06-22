#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of array:";
    cin>>n;
    int array[n];
    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"array before squaring:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
        cout<<"\t";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        array[i]=array[i]*array[i];
    }
    cout<<"array after squaring:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
        cout<<"\t";
    }
    cout<<endl;
}