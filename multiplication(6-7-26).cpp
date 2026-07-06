#include<iostream>
using namespace std;
int main()
{
    int n1,m1,n2,m2,n,m;
    cout<<"enter the number of rows for array 1:"<<endl;
    cin>>n1;
    cout<<"enter the number of columns for array 1:"<<endl;
    cin>>m1;
    int a1[n1][m1];
    
    cout<<"enter the number of rows for array 2:"<<endl;
    cin>>n2;
    cout<<"enter the number of columns for array 2:"<<endl;
    cin>>m2;
    
    int a2[n2][m2];
    int f[n1][m2];

    cout<<"enter the elements for array 1:"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            cin>>a1[i][j];
        }
    }
    cout<<"enter the elements for array 2:"<<endl;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            cin>>a2[i][j];
        }
    }
    for(int i=0;i<n1;i++)
    {
        for( int j=0;j<m2;j++)
        {
            f[i][j]=0;
            for(int k=0;k<n2;k++)
            {
                f[i][j]+=a1[i][k]*a2[k][j];
            }
        }
        
    }
    cout<<"multiplication of matrices:"<<endl;
    for(int i=0;i<n1;i++)
    {
        for( int j=0;j<m2;j++)
        {
            cout<<f[i][j];
            cout<<"\t";
        }
        cout<<endl;
    }
}