#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of array:";
    cin>>n;
    int temp;
    int a[n];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int num,query;
    cout<<"input the number of queries:"<<endl;
    cin>>num;
    int flag=1;
    int i=num;
    while(i>0)
    {
    for(int i=1;i<num;i++)
    {
        cout<<"enter query:"<<endl;
        cin>>query;
        for(int i=0;i<n;i++)
        {
            if(query==a[i])
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"present"<<endl;
        }
        else
        {
            cout<<"absent"<<endl;
        }
    }
    i--;
    }
}