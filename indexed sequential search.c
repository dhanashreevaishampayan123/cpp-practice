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
      
      int block_size=3;
      int num_blocks=(n+block_size-1)/block_size;
      
      int index[num_blocks];
      for(int i=0;i<num_blocks;i++)
      {
          index[i]=a[i*block_size];
      }
      
      int key;
      printf("enter the key:");
      scanf("%d",&key);
      int block=-1;
      
      int i;
      for( i=0;i<num_blocks;i++)
      {
          if(key>=index[i])
          {
              block=i;
          }
          else
          {
              break;
          }
      }
      
      int flag=0;
      if(block==-1)
      {
          printf("element not found");
      }
      else
      {
          int start=block*block_size;
          int end;
          if(block==num_blocks-1)
          {
              end=n;
          }
          
          else
          {
              end=start+block_size;
          }
          
          for(int i=start;i<end;i++)
          {
              if(a[i]==key)
              {
                  flag=1;
                  break;
              }
          }
      }
      if(flag)
      {
          printf("FOUND");
      }
      else
      {
          printf("NOT FOUND");
      }
      return 0;
  }