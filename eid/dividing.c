#include<stdio.h>
int main()
{
   int D,Q,R;
   scanf("%d %d %d",&D,&Q,&R);
    int Divisor=(D-R)/Q;
    printf("%d",Divisor);
    // (dividend-reminder)/quotient
//    dividend is D, the quotient is Q and the remainder is R. What is the divisor
    return 0;
}