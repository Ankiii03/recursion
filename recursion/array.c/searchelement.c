#include<stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,4,7};
    int x=45 ;
    int check =0;
    for(int i=0;i<=6;i++)
          if(arr[i]==x)
          {
                  check=check +1;
          }
          if(check==0)
          {
            printf("%d  is  not present  in the arary",x);
          }
          else{
            printf("%d is present in the array",x);
          }
    return 0;
}