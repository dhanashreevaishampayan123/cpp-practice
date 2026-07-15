#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"enter a number:";
    cin>>n;
    int array[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int flag=1;
    for(int i=0;i<(n-1);i++)
    {
        if(array[i]>array[i+1])
        {
        flag=0;
        break;
        }
    }
    if(flag ==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}