#include<stdio.h>
int main()
{
   int Lia[5][4];
   for(int i=0;i<5;i++)
   {
    for(int j=0;j<4;j++)
    {
        scanf("%d" ,&Lia[i][j]);
    }
   }
   for(int i=0;i<5;i++)
   {
    for(int j=0;j<4;j++)
    {
        printf("%d ",Lia[i][j]);
    }
    printf("\n");
   }
    return 0;
}