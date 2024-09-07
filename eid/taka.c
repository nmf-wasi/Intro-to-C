#include<stdio.h>
int main()
{
// Mina and Rina together have X taka. Mina has Y taka more than Rina. What amount of money does Mina and Rina each have.
// Example:
// if X = 7532, and Y = 560 then,
// Mina has 4046 taka and Rina has 3486 taka.
    int total, extra;
    scanf("%d %d",&total, &extra);
    int Rina=(total-extra)/2;
    int Mina=Rina+extra;
    printf("%d %d",Mina ,Rina);
    return 0;
}