#include<stdio.h>
#include<string.h>
int main()
{
   typedef  struct cricketer{
        char name [15];
        int age;
        int noOfmatches ;
        float average ;
    } cricketer;
    cricketer arr[3];
    for(int i =0;i<=3;i++)
    {
        scanf("%[^\n]s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfmatches);
        scanf("%f",&arr[i].average);
    }
    for(int i =0;i<=3;i++)
    {
        printf("name: %s\n",arr[i].name);
        printf("age: %d\n",arr[i].age);
        printf(" noofmatches: %d\n",arr[i].noOfmatches);
        printf(" average: %f",arr[i].average);
    }

    return 0;
}