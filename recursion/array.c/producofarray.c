#include<stdio.h>
int main()
{
    int arr[5]={1,2,2,4,3};
    int product = 1;
    

    for(int i=0;i<5;i++)
    {
        product = product*arr[i];
    }
    printf("%d\n",product);
    return 0;
}