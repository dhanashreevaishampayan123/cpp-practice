#include<iostream>
#include<vector>
using namespace std;
void spiralmatrix(vector<vector<int>> &matrix,int n)
{
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;
    int direction=0;
    int element=1;
    while(left<=right && top<=bottom && element<=(n*n))
    {
        if(direction==0)
        {
            for(int i=left;i<=right;i++)
            {
                matrix[top][i]=element;
                element++;
            }
            top++;
        }
        else if(direction==1)
        {
            for(int i=top;i<=bottom;i++)
            {
                matrix[i][right]=element;
                element++;
            }
            right--;
        }
        else if(direction==2)
        {
            for(int i=right;i>=left;i--)
            {
                matrix[bottom][i]=element;
                element++;
            }
            bottom--;
        }
        else 
        {
           for(int i=bottom;i>=top;i--)
           {
               matrix[i][left]=element;
               element++;
           }
           left++;
        }
        direction=(direction+1)%4;
        
    }
}
int main()
{
    int n;
    cout<<"enter size of the matrix:"<<endl;
    cin>>n;
    
    vector<vector<int>> matrix(n,vector<int> (n));
    spiralmatrix(matrix,n);
    cout<<"elements in spirally filled  matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}