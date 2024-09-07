#include<stdio.h>
int sum(void)
{
   int a,b;
   scanf("%d %d",&a,&b);
   int s=a+b;
   return s;
}


int main()
{
    int p=sum(100);
   printf("%d\n",p);
    return 0;
}