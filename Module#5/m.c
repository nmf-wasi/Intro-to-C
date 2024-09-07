#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
// input 1 2 3 there are spaces after each input, so scanf should be like that as well
// output 1 3 there is a space after minimum, therefore, we need to add a space after the minimum while printing

//for minimum
if(a<=b&&a<=c)
{
    printf("%d ",a);
}
else if(b<=a&&b<=c)
{
    printf("%d ",b);
}
else 
{
    printf("%d ",c);
}

//for maximum
if(a>=b&&a>=c)
{
    printf("%d",a);
}
else if(b>=a&&b>=c)
{
    printf("%d",b);
}
else 
{
    printf("%d",c);
}

    return 0;
}