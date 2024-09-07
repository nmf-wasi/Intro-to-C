#include<stdio.h>
int main()
{
   int row, collumn;
   scanf("%d %d",&row,&collumn);
   int Lia[row][collumn];
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<collumn;j++)
    {
        scanf("%d",&Lia[i][j]);
    }
   }
   for(int i=row-1;i<row;i++)
   {
    for(int j=0;j<collumn;j++)
    {
        printf("%d ",Lia[i][j]);
    }
   }
   printf("\n");
   for(int i=0; i<row;i++)
   {
    for(int j=collumn-1;j<collumn;j++)
    {
        printf("%d ",Lia[i][j]);
    }
   }
    return 0;
}