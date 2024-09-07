#include<stdio.h>
int main()
{
//You are given a positive integer n. Your task is to calculate the sum of all integers from 1 to n, inclusive.
long long int i, given,sum=0;

scanf("%lld",&given);
for(i=1;i<=given;i++)
{
    sum+=i;
}
    printf("%lld",sum);
    return 0;
}