#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int i=0;
    cout<<"enter elements for vector1:"<<endl;
    
    
    while(i<5)
    {
        
        int element;
        cin>>element;
        v.push_back(element);
        i++;
    }
    
    cout<<"for loop:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        cout<<endl;
    }
    
    cout<<"for each loop:"<<endl;
    for(int element:v)
    {
        cout<<element<<endl;
    }
    cout<<"while loop:"<<endl;
    int j=0;
    while(j<5)
    {
      cout<<v[j];  
      cout<<endl;
      j++;
    }
        
}