#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name [50];
        int noofpages;
        float price;
    }a,b,c;
    a.noofpages =100;
    a.price = 411.5;
    a.name[0] = 'S';
    a.name[1] = 'e';
    a.name[2] = 'v';
    a.name[3] = 'e';
    a.name[4] = 'n';       
  char ch [13]  = "Secret Seven";
  printf("%s",ch);
  return 0;
}