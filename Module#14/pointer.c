#include<stdio.h>
int main()
{
   int x= 12;
   int * p= &x;
//    printf("%p\n",&x);
//    printf("%p\n",&p);
//    printf("%d\n",*p);
   *p=234;
   printf("%d\n",x);
    return 0;
}
