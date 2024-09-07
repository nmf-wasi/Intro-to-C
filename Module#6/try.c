#include<stdio.h>
int main()
{
   int input,sum=0;
   scanf("%d",&input);
   for(int i=1;i<=input;i++)
   {
    sum+=i;
    printf("sum=%d i=%d\n",sum,i);
   }
    return 0;
}