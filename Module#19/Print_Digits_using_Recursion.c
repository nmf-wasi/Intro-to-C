#include<stdio.h>
void digits(long long int input)
{
    long long int x=input%10;
    if(x==0) return;
    digits(input/10);
    printf("%lld ",x);

}
int main()
{
    int test;
   scanf("%d",&test);
   for(int t=1;t<=test;t++)
   {
   long long int input;
   scanf("%lld",&input);
   digits(input);
   if(input==0) printf("0\n");
   else printf("\n");
   }
    return 0;

}