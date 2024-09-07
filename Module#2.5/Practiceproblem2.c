#include<stdio.h>

int main() {

    // You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.
    int Yuna, Lia;
    scanf("%d %d",&Yuna,&Lia);
    int sum=Yuna+Lia, min=Yuna-Lia, mul=Yuna*Lia;
    float div=Yuna*1.0/Lia;
    printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%0.2f",Yuna,Lia,sum,Yuna,Lia,min,Yuna,Lia,mul,Yuna,Lia,div);
   
    return 0;
}
