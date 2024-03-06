#include <stdio.h>
int main ()
{
   int a;
   int b;
   int c;
   printf ("inserici tre lunghezze");
   scanf ("%d %d %d" , &a, &b,&c);
   if (a==b&&b==c)
   {
       printf("il triangolo e'equilatero\n");
    }
    else if (a==b && b!=c && c==a)
    {
        printf ("il triangolo e'isoscele");
    }
    if (a!=b && b!=c && a!=c)
    { 
        printf ("il triangolo e'scaleno");
    }
    if (a==0 && b==0 && c==0)
    {
        printf ("non e'un triangolo");
    }
}