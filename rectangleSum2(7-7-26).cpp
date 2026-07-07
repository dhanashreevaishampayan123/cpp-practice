#include<iostream>
#include<vector>
using namespace std;
int rectangleSum(vector<vector<int>> &matrix,int l1,int l2,int r1,int r2)
{
    int sum=0;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            matrix[i][j+1]+=matrix[i][j];
        }
    }
    for(int i=l1;i<=l2;i++)
    {
        if(r1!=0)
        {
            sum+=matrix[i][r2]-matrix[i][r1-1];
        }
        else
        {
            sum+=matrix[i][r2];
        }
    }
    return sum;
}
int main()
{
    int n,m,l1,l2,r1,r2;
    cout<<"enter the number of rows and columns:"<<endl;
    cin>>n>>m;
    cout<<"enter the coordinates l1,l2,r1,r2:"<<endl;
    cin>>l1>>l2>>r1>>r2;
    vector<vector<int>> matrix(n,vector<int> (m));
    for(int i=0;i<n;i++)
    {
        cout<<"enter the elements for row "<<i<<":"<<endl;
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"before addition:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    int sum=rectangleSum(matrix,l1,l2,r1,r2);
    cout<<"after addition:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"sum is:"<<endl;
    cout<<sum<<endl;
}
