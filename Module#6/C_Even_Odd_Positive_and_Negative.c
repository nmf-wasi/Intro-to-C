#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a;
//to count,you need an int to count each of the types and the count starts from 0
    int even=0,odd=0,pos=0,neg=0;

   for(int i=1;i<=n;i=i+1)
   {
    scanf("%d",&a);
    // scan done, now do whatever you like before the loop ends, when the loop ends, value will be removed from memory
    if (a%2==0)
    {
        even++;
        // counting even
    }  
    else
    {
        odd++;
        // coutning odd
    }
    if (a<0)
    {
        neg++;
    }
    else if (a>0)
    {
        pos++;
    }
}
 printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);
    return 0;
}