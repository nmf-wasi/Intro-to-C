#include<stdio.h>
int main()
{
   int A;
   scanf("%d",&A);
   long long int Lia[A];
   long long int sum=0;
//    Print the absolute summation of these numbers.
 for(int i=0;i<A;i++)
{ 
    scanf("%lld",&Lia[i]);
}
 for(int i=0;i<A;i++)
{ 
 sum+=Lia[i];
}
if(sum<0)
{
    sum=sum*(-1);
}
printf("%lld",sum);
    return 0;
}