#include<stdio.h>
int main()
{
   double wasi=123.000;
   printf("%llf\n",wasi);
   printf("%lld\n",(long long int)wasi);
   if(wasi==(long long int)wasi)
        {
            printf("%lld\n",(long long int)wasi);
        }
        else if(wasi!=(long long int)wasi)
        {
            printf("-1\n");
        }
    return 0;
}