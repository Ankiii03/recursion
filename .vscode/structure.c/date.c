#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct date {
        int day ;
        int month ;
        int year;
    } date;
    date a;
    date b;
    a.day =5;
    a.month =12;
    a.year = 1999;

    b.day =19;
    b.month = 1;
    b.year = 2023;

   bool flag = true;
   if(a.day!=b.day) flag = false;
   if(a.day!=b.day) flag = false;
   if(a.day!=b.day) flag = false;
   if(flag==true)
   {
    printf("the dsates are same");
   }
   else {
    printf("the dates  are different ");
   }
   date c;
   c=a;
   if(a==c)
printf("the dates are same");
    return 0;
} 
