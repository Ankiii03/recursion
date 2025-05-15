#include<stdio.h>
int main()
{  
    int r;
    printf("enter the number of rows");
    scanf("%d",&r);
    int c;
    printf("enter the number of coloumns");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[c][r];
     for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
          //  printf("%d\t",arr[j][i]);
          brr[i][j]=arr[j][i];
        }
        printf("\n");
    }
     for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
          printf("%d\t",brr[j][i]);
         
        }
         printf("\n");
    }
    return 0;
}