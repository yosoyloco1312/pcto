#include <stdio.h>
int main()
{
    int a;
    printf("in che anno sei nato");
    scanf("%d",&a);
    if(a<1969)
    {
        printf("sei nato prima\n");
    }
    else if(a==1969)
    {
        printf("sei nato lo stesso anno");
    }
    else
    {
        printf("sei nato dopo\n");
    }
 }   