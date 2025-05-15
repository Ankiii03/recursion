#include<stdio.h>
int main()
{   int i;
    int mark[10];
    for(int i = 0;i<10;i++)
    {
    printf("enter the number:",i+1);
    scanf("%d",&mark[i]);
    }
    for(int i = 0;i<10;i++)
    {
    if(mark[i]<35)
    {
    printf("%d\n",i);
    }
    }
     return 0;
}