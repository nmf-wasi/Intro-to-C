#include<stdio.h>
void FirstandLastDigit(int n)
{
    int first_digit=n/1000;
    int last_digit=n%10;
    int answer=first_digit+last_digit;
    printf("%d",answer);
}


int main()
{
   int n;
   scanf("%d",&n);
   FirstandLastDigit(n);
   
    return 0;
}