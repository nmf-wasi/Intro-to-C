#include<stdio.h>
int main()
{
   int input;
   scanf("%d",&input);
   int space=input-1;
   for(int i=1; i<=input;i++)
   {
    for(int j=1;j<=space;j++)
    {
        printf(" ");
    }
    for(int j=i;j>=1;j--)
    {
        printf("%d",j);
    }
    space--;
    printf("\n");
   }
    return 0;
}