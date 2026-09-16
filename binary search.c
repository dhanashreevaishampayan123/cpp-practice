#include<stdio.h>
  int main()
  {
      int n;
      printf("enter size of array:");
      scanf("%d",&n);
      
      if(n==0)
      {
          printf("array is empty");
          return 0;
      }
      
      int a[n];
      printf("enter the elements:");
      for(int i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      
      int key;
      printf("enter the key:");
      scanf("%d",&key);
      int count=0;
      
      int flag=0;
      int start=0;
      int last=n-1;
      
      while(start<=last)
      {
          count++;
          int mid=(start + last)/2;
          if(a[mid]==key)
          {
              flag=1;
              break;
          }
          else if(key>a[mid])
          {
              start=mid+1;
          }
          else
          {
              last=mid-1;
          }
          
      }
      printf("count=%d",count);
      if(flag)
      {
          printf("\nfound");
      }
      else
      {
          printf("\nnot found");
      }
      return 0;
  }