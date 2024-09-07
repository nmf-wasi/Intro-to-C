#include<stdio.h>
int main()
{
   int ar[5]={10,20,30,40,50};
   printf("Address of 1st index= %p\n",&ar[1]);
   printf("Address of 1st index= %p\n",&1[ar]);
   printf("Address of 1st index= %p\n",*(ar+1));
   printf("Address of 1st index= %p\n",*(1+ar));
   printf("value of 1st index using index= %d\n",ar[1]);
   printf("value of 1st index using index= %d\n",1[ar]);
   printf("value of 1st index using pointer= %d\n",*(ar+1));
   printf("value of 1st index using pointer= %d\n",*(1+ar));
   printf("Therefore, ar[1]'s pointer is (1+ar) or (ar+1)\n(ar+1)=(1+ar)=&ar[0]\n");
    return 0;
}



