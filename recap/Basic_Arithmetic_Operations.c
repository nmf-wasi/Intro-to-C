#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int sum=a+b, difference=a-b, product=a*b;
   float quotient=a/b;
   printf("sum=%d\ndifferece=%d\nproduct=%d\nquotient=%d\n",sum,abs(difference),product,quotient);
    return 0;
}