#include<stdio.h>
int main()
{
   int test;
   scanf("%d",&test);
   for(int t=1;t<=test;t++)
   {
        long long int ans,a,b,c;
        scanf("%lld %lld %lld %lld",&ans,&a,&b,&c);
        double d=(double)ans/(a*b*c);
        if(d==(long long int)d)
        {
            printf("%lld\n",(long long int)d);
        }
        else if(d!=(long long int)d)
        {
            printf("-1\n");
        }
    }
    return 0;
}