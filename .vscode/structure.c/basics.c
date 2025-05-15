#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
}s ={3};

void main()
{    struct student s1 = {1,"jenny",90};
    struct student  s2 ;
    printf("enter inf for s2");
    scanf("%d %s %f",&s2.rollno,&s2.name,&s2.marks);

    printf("inf for s1");
    printf("\n %d %s %f ",s1.rollno,s1.name,s1.marks);
    printf("\n info for s2");
    printf("\n %d %s %f ",s2.rollno,s2.name,s2.marks);
     printf("\n info for s");
    printf("\n %d %s %f ",s.rollno,s.name,s.marks);
   
}