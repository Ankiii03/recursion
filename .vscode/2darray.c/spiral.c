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
    printf("\n");
    int minr = 0;
    int maxr =n-1;
    int minc = 0;
    int maxc = n-1;
    int tne= m+n;
    int count =0;
    while(count<tne)
    {
        for(int j=minc;j<=maxc;j++)
        {
            printf("%d\t",a[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne)
        break;
        for(int i=minr;i<=maxr;i++)
        {
            printf("%d\t",a[i][maxc]);
              count++;
        }
        maxc--;
        if(count>=tne)
        break;
        for(int j=maxc;j>=minc;j--)
         {
            printf("%d\t",a[maxr][j]);
              count++;
        }
        maxr--;
         if(count>=tne)
        break;

        for(int i=maxr;i>=minr;i--)
        {
         printf("%d\t",a[i][minc]);
           count++;
        }
        minc++;
         if(count>=tne)
        break;
    }
    return 0;
}