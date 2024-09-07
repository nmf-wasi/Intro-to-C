#include<stdio.h>
int main()
{
//    Make a simple program that reads one variable named N which is the summation of 5 consecutive even numbers. Print the 5 consecutive even numbers whose summation is N.
    int input;
    scanf("%d", &input);
    int sum=input/5;
    int a=sum-4,b=sum-2,c=sum+2,d=sum+4;
    printf("%d %d %d %d %d",a,b,sum,c,d);

    return 0;
}