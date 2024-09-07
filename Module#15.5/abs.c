#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int my_abs(int a)
{
    int c= abs(a);
   return c;
}
int main()
{
   int a;
   scanf("%d",&a);
   int b=my_abs(a);
   printf("%d",b);
    return 0;
}
