#include <iostream>
using namespace std;
int main() {
    
    int n;
    int largest;
    cout<<"enter a number:";
    cin>>n;
    int array[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    largest=array[0];
    for(int i=1;i<n;i++)
    {
     if(largest<array[i])
     {
         largest=array[i];
     }
    }  
    cout<<"largest is:"<<largest;
    return 0;
}