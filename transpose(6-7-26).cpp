#include<iostream>
using namespace std;
int main()
{
int n,m;
cout<<"ENTER THE NUMBER OF ROWS:"<<endl;
cin>>n;
cout<<"ENTER THE NUMBER OF COLUMNS;"<<endl;
cin>>m;
int a[n][m];
cout<<"enter the elements:"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}
cout<<"origial matrix:"<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<a[i][j];
        cout<<"\t";
    }
    cout<<endl;
}
cout<<"transpose of the matrix:"<<endl;
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<a[j][i];
        cout<<"\t";
    }
    cout<<endl;
}
}