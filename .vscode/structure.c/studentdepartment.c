#include<stdio.h>
#include<string.h>
 typedef struct student
    {
        int rollnumber ;
        char name[20];
        char dept[30];
        char course[30];
        int yearofjoining;
    } student;
 
void check( student s1 ,student s2)
{
    if(s1.dept == s2.dept)
    {
          printf("the departments are same",s1.dept);
    }
    
    return ;

}
int main ()
{
    student s1 ;
    student s2;
    s1.rollnumber = 23;
    strcpy(s1.name,"anurag");
    strcpy(s1.dept,"btech");
    strcpy(s1.course,"Cse");
    s1.yearofjoining = 2003;
    s2.rollnumber = 22;
    strcpy(s2.name,"Anuradha");
    strcpy(s2.dept,"btech");
    strcpy(s2.course,"Cse");
    s2.yearofjoining = 2005;
    // printf("%s\n",s1.dept);
    // printf("%s\n",s2.dept);
    check(s1,s2);

  
    return 0;
}