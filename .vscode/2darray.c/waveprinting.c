#include<stdio.h>
int main()
{
     int m;
    printf("Enter the number of rows in :");
    scanf("%d",&m);
    int n;
     printf("Enter the number of columns in: ");
    scanf("%d",&n);
    int a[m][n];
    printf("enter the elements of 1 matrices");
    for(int i =0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int i =0;i<m;i++){
     if(i%2==0)
        {
            for(int j=0;j<n;j++)
                {
                printf("%d\t",a[i][j]);
                }
        }
        else {
            for(int j=n-1;j>=0;j--)
                {
                printf("%d\t",a[i][j]);
                }
        }
        printf("\n");
     }
    return 0;
}