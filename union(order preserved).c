#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter size of array 1:";
    cin>>n;
    cout<<"enter size of array 2:";
    cin>>m;
    int a1[n],a2[m];
    cout<<"enter elements of array 1:\n";
    for(int i=0;i<n;i++)
    {
    cin>>a1[i]; 
    }
    cout<<"enter elements of array 2:\n";
    for(int i=0;i<m;i++)
    {
    cin>>a2[i]; 
    }
    for(int i=0;i<n;i++)
    {
        bool present=false;
        for(int j=0;j<i;j++)
        {
          if(a1[i]==a1[j])  
          {
              present =true;
              break;
          }
        }
        if(!present)
        {
           cout<<a1[i]<<"\t";
        }
    }
    for(int i=0;i<m;i++)
    {
        bool present=false;
        bool in_array=false;
        for(int j=0;j<i;j++)
        {
          if(a2[i]==a2[j])  
          {
              present =true;
              break;
          }
        }
        for(int k=0;k<n;k++)
            {
                if(a2[i]==a1[k])
                {
                   in_array=true; 
                   break;
                }
            }
        if(!present && !in_array)
        {
           cout<<a2[i]<<"\t"; 
        }
        
    }
    
}