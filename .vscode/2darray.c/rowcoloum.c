#include<stdio.h>
#include<limits.h>
int main()
{    int r,c;
   int arr[r][c];
   int max = INT_MIN;
    printf(" enter the number of rows and coloumns: ");
    scanf("%d%d",&r,&c);
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
            printf("%d",arr[i][j]);
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
        printf("%d",max);
    }

    return 0;
}