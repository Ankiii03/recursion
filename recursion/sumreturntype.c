#include<stdio.h>
int power (int a, int b)
{
    if(b==0)
    return 1;
   int recAns = a * power(a,b-1);
    return recAns;
}

int main()
{
      int a,b;
      printf("enter the base:");
      scanf("%d",&a);
      printf("enter the power:");
      scanf("%d",&b);
      int p= power(a,b);
      printf("a raise to the power b is  %d",p);
    return 0;

}