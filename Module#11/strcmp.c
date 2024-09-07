#include<stdio.h>
#include<string.h>

int main()
{
   char a[100],b[100];
   scanf("%s %s", a,b);
   int copy=strcmp(a,b);     
   if (copy<0)
   {
        printf("a is smol");
   }
   else if (copy>0)
   {
        printf("b is smol");
   }
   else if (copy==0)
   {
        printf("SAME");
   }
   return 0;
}