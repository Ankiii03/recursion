#include<stdio.h>
#include<limits.h>
int main()
{  int r = 3,c = 3;
   int arr[r][c];
  int max = INT_MIN;
  int min = INT_MAX;
    
    for(int i =0 ;i<r;i++)
    {
        for( int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i =0 ;i<r;i++)
    {
        for( int j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
     for(int i =0 ;i<r;i++)
    {
        for( int j=0;j<c;j++)
        {
           if( max <arr[i][j])
           {
            max = arr[i][j];
           }
        }
      
    }
    for(int i =0 ;i<r;i++)
    {
        for( int j=0;j<c;j++)
        {
           if(min>arr[i][j])
           {
            min = arr[i][j];
           }
        }
      
    }
     printf("%d\n",max);
      printf("%d",min);
    return 0;
}