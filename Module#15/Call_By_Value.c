#include<stdio.h>
void fun()
{
   int x=345;
   printf("fun er x er address= %p\n",&x);
   printf("fun er x er address= %d\n",x);


}
int main()
{
   int x=234;

   printf("Address of x of Main= %p\n",&x);
   printf("Value of x of Main= %d\n",x);
   fun(x);
   printf("After func: Address of x of Main= %p\n",&x);
   printf("After func: Value of x of Main= %d\n",x);
    return 0;
}
