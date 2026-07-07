#include<iostream>
#include<vector>
using namespace std;
void rotatearray(vector<vector<int>> &v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
           swap(v[i][j],v[j][i]) ;
        }
    }
    for(int i=0;i<n;i++)
    {
        int left=0;
        int right=n-1;
        while(left<right)
        {
            swap(v[i][left],v[i][right]);
            left++;
            right--;
        }
    }
}
int main()
{
    int n;
    cout<<"enter size of square matrix:"<<endl;
    cin>>n;
    vector<vector<int>> v(n,vector<int> (n));
    for(int i=0;i<n;i++)
    {
        cout<<"enter the elements of row "<<i<<":"<<endl;
        for(int j=0;j<n;j++)
        {
           cin>>v[i][j];
        }
    }
    cout<<"the rotated matrix by 90 degrees is:"<<endl;
    rotatearray(v);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          cout<<v[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}