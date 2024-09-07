#include<stdio.h>
int main()
{
   int ar[5]={10,20,30,40,50};
   printf("Address of 0th index= %p\n",&ar[0]);
   printf("Address of 0th index= %p\n",&ar);
   printf("value of 0th index using index= %d\n",ar[0]);
   printf("value of 0th index using pointer= %d\n",*ar);
   printf("Therefore, ar[0]'s pointer is ar\nar=&ar[0]\n");
    return 0;
}



