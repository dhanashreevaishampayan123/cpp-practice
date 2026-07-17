#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter length of array:";
    cin>>n;
    
    int a[n];
    cout<<"enter elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int index=0;
    for(int i=0;i<n;i++)
    {
        bool duplicate=false;
        for(int j=0;j<n;j++)
        { 
            if(i!=j && a[i]==a[j])
            {
                duplicate=true;
                break;
            }
        }
        if(duplicate==false)
        {
            cout<<a[i]<<"\t";
        }
    }

}
