#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of array:";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int largest=a[0];
    int secondlargest=a[0];
    for(int i=0;i<n;i++)
    {
        if(largest<a[i])
        {
            secondlargest=largest;
            largest=a[i];
            
        }
        else if(a[i]>secondlargest && a[i]!=largest)
        {
            secondlargest=a[i];
        }
    }
    cout<<"second largest element is:"<<secondlargest;
}