#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
long long int fact(int nmf)
{
     if(nmf==0)
     {
          return 1;
          // base case
     }
     long long int ans=fact(nmf-1);
     return ans*nmf;    
}
int main()
{
   int a;
   scanf("%d",&a);
   long long int factorial=fact(a);
   printf("%lld",factorial);
    return 0;
}