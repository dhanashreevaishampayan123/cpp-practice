#include<iostream>
#include<vector>
using namespace std;
void spiralorder(vector<vector<int>> &matrix)
{
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;
     int direction=0;
    while(left<=right && top<=bottom)
    {
        if(direction==0)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<matrix[top][i]<<" ";
            }
            top++;
        }
        else if(direction==1)
        {
            for(int i=top;i<=bottom;i++)
            {
                cout<<matrix[i][right]<<" ";
            }
            right--;
        }
        else if(direction==2)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }
        else 
        {
           for(int i=bottom;i>=top;i--)
           {
               cout<<matrix[i][left]<<" ";
           }
           left++;
        }
        direction=(direction+1)%4;
    }
}
int main()
{
    int n,m;
    cout<<"enter rows of the matrix:"<<endl;
    cin>>n;
    cout<<"enter columns of the matrix:"<<endl;
    cin>>m;
    vector<vector<int>> matrix(n,vector<int> (m));
    for(int i=0;i<n;i++)
    {
        cout<<"enter the elements of row "<<i<<":"<<endl;
        for(int j=0;j<m;j++)
        {
           cin>>matrix[i][j];
        }
    }
    cout<<"elements in spiral order:"<<endl;
    spiralorder(matrix);
    
    return 0;
}