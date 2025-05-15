#include<stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int sumeven =0;//1+3+5+7
    int sumodd =0;
    int diff;
    for(int i=0;i<=6;i++)
    {
        if(arr[i]%2==0)
        {
            sumeven +=arr[i];
        }
        else
        {
            sumodd +=arr[i];
        }
    }
    diff =sumodd- sumeven ;
    printf("%d",diff);
    return 0;
}