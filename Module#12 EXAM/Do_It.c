#include<stdio.h>
int main()
{
   int input;
   int repeat;
   scanf("%d %d",&repeat,&input);
   for(int i=1; i<=repeat;i++)
   {
    for(int k=1; k<=input; k++)
    {
        printf("%d ",k);
    }
    printf("\n");


   }
   
    return 0;
}