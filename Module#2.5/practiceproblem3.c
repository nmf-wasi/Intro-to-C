#include<stdio.h>
int main()
{ 
    // You need to take one integer value as input and tell if the value is positive or negative or zero.
    int given;
    scanf("%d", &given);
    if(given==0)
    {
        printf("zero");
    }
    if(given>0)
    {
        printf("positive");
    }
    if (given<0)
    {
        printf("negative");
    }
    return 0;

}