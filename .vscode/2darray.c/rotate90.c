#include<stdio.h>
int main()
{  
    int r;
    printf("enter the number of rows");
    scanf("%d",&r);
   
    int arr[r][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            scanf("%d",&arr[i][j]);
        } 
    }
    for(int i =0;i<r;i++)
    {
        for(int j=i;j<r;j++)
        {
            int temp =arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
     for(int i =0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
          printf("%d\t",arr[i][j]);
        }
         printf("\n");
    }
    for(int i= 0;i<r;i++)
    {
        int k= r-1;
        int j =0;
        int  temp = arr[i][j];
        arr[i][j] =arr [i][k];
        arr[i][k] = temp;
        j++;
        k--;
         printf("\n");
    }
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
          printf("%d\t",arr[i][j]);
        }
         printf("\n");
    }
   
    return 0;
}