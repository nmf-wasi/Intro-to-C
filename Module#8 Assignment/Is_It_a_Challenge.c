#include<stdio.h>
int main()
{
   int input;
   scanf("%d",&input);
   if(input>1)
   {
    for(int i=1;i<=input;i++)
    {
        printf("%d ",i);
    }
   }
   else if(input<1)
   {
    for(int i=input;i<=0;i++)
    {
        printf("%d ",i);
    }
   }
    return 0;
}