#include<stdio.h>
int main()
{
//    Make a simple program that reads one variable named N which is the summation of 5 consecutive even numbers. Print the 5 consecutive even numbers whose summation is N.
    int input;
    scanf("%d", &input);
    int sum=input/4;
    int a=sum-3,b=sum-1,c=sum+1,d=sum+3;
    printf("%d %d %d %d",a,b,c,d);

    return 0;
}