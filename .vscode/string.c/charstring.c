#include<stdio.h>
int main()
{
    int arr[]={'H','e','l','l','o',')'};
    // char ch = '\0';
    // int x=0;
    // char a = (char)x;
    // printf("%c",a);
    int i=0;
    while (arr[i]!=')')
    {
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}