#include<stdio.h>
int FirstandLastDigit(int n)
{
    int first_digit=n/1000;
    int last_digit=n%10;
    int answer=first_digit+last_digit;
    return answer;
}


int main()
{
   int n;
   scanf("%d",&n);
   int ans=FirstandLastDigit(n);
   printf("%d",ans);
    return 0;
}