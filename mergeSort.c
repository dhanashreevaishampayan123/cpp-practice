#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid,int r)
{
    int an=mid-l+1;
    int bn=r-mid;
    
    int a[an];
    int b[bn];
    
    for(int i=0;i<an;i++)
    {
        a[i]=arr[l+i];
    }
    for(int j=0;j<bn;j++)
    {
        b[j]=arr[mid+1+j];
    }
    
    int i=0;
    int j=0;
    int k=l;
    
    while(i<an && j<bn)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    
    while(i<an)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<bn)
    {
        arr[k]=b[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l>=r)
    {
        return;
    }
    int mid=(l+r)/2;
    mergesort(arr,0,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main()
{
    int arr[]={5,3,7,9,8,1,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}