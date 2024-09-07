#include<stdio.h>
int main()
{
   int point;
   scanf("%d",&point);
   int three=point/3;
   int rmn_1=point%3;
   int two=rmn_1/2;
   int rmn_2=rmn_1%2;
   int one=rmn_2;
   int total=three+two+one;
   printf("%d",total);
    return 0;
}