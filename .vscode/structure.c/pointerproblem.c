#include<stdio.h>
typedef int* pointer ;
int main ()
{
    int x = 5,y = 7;
   
    pointer a = &x,b = &y;
  
    
    printf("%p\n",a);
    printf("%d\n",b);
    return 0;
}