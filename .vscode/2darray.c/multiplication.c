#include<stdio.h>
int main()
{     
    
    
     int m;
    printf("Enter the number of rows in :");
    scanf("%d",&m);
    int n;
     printf("Enter the number of columns in: ");
    scanf("%d",&n);
    int p;
     printf("Enter the number of rows:");
    scanf("%d",&p);
    int q;
     printf("Enter the number of columns in: ");
    scanf("%d",&q);
    int arr[m][n];
    int brr[p][q];
     int res[m][q];
     
    for(int i =0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        scanf("%d",&arr[i][j]);
    }
     
     for(int i =0;i<p;i++)
    {
        for(int j =0;j<p;j++)
        {
        printf("%d\t",arr[i][j]);
        }
         printf("\n");
    }
   
    for(int i =0;i<p;i++)
    {
        for(int j =0;j<p;j++)
        scanf("%d",&brr[i][j]);
    }
     for(int i =0;i<p;i++)
    {
        for(int j =0;j<p;j++)
        {
        printf("%d\t",brr[i][j]);
        }
         printf("\n");
    } 
   
    if(n!=p)
    {
        printf("the matrices canot bre multiply");
    }
    else
    {
        int res[m][q];
        for(int i =0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                res[i][j] =0;
                {
                    for(int k=0;k<n;k++)
                    {
                        res[i][j] += arr[i][k]*brr[k][j];
                    }
                }
            }
        }
    }
    for(int i =0;i<m;i++)
        {
            for(int j=0;j<q;j++)
           {
                printf("%d\t",res[i][j]);
           }
            printf("\n");
        }
   
return 0;

}