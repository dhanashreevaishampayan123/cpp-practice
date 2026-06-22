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
    cout<<"array before sorting:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
        cout<<"\t";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(array[j+1]%2==0)
            {
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    cout<<"array after sorting:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
        cout<<"\t";
    }
    cout<<endl;
}