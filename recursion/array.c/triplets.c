#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int x=12;
    int count =0;
    for(int i=0;i<=7;i++)
    {
        for(int j=i+1 ;j<=7;j++)
        {
           for(int k=j+1;k<=7;k++)
           {
            if(x==arr[i]+arr[j]+arr[k])
            {
                count++;
            }
           }
        }
    }
    printf("%d",count);
    return 0;
}