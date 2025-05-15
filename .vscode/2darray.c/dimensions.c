#include<stdio.h>

int main()
{  int r = 3,c = 3;
int sum = 0;
   int arr[r][c];
 
    
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
      for(int i =0 ;i<2;i++)
    {
        for( int j=0;j<2;j++)
        {
           sum =sum +arr[i][j];
        }
    }
     printf("%d",sum);
      return 0;
}