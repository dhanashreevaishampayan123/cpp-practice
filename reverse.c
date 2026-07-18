#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of array:";
    cin>>n;
    int a[n];
    cout<<"enter elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     int left=0;
     int right=n-1;
    cout<<"array before reversing:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    while(left<right)
    {
        int temp=a[left];
        a[left]=a[right];
        a[right]=temp;
        left++;
        right--;
    }
    cout<<"array after reversing:\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
    
}
