#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int a;
   scanf("%d",&a);
   int fact=1;
   for(int i=1;i<=a;i++)
   {
        fact=fact*i;
   }
   printf("%d",fact);
    return 0;
}