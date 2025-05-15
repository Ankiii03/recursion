#include<stdio.h>
union abc
{
    int a;
    char b;
    float c;
};
void main()
{
    union abc u;
    union abc *ptr =&u;
    u.a=1;
    u.b=97;
    //  u.c = 78.90;
    printf("%d\n",ptr->a);
     printf("%c\n",ptr->b);
    //  printf("%f",ptr->c);

}