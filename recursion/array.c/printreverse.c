#include<stdio.h>
int main()
{
    int arr[5];
    for(int i =0 ; i<=5 ;i++)
    {
        printf("enter the number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i =5; i>=0;i--)
    {
        printf("%d\n2",arr[i]);
    }
    return 0;
}