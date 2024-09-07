#include<stdio.h>
int main()
{
   int row;
   int collumn;
   scanf("%d %d",&row,&collumn);
   int Yuna[row][collumn];
   int Yeji[row][collumn];
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<collumn;j++)
    {
        scanf("%d",&Yuna[i][j]);
    }
    
   }
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<collumn;j++)
    {
        scanf("%d",&Yeji[i][j]);
    }
   }
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<collumn;j++)
    {
        printf("%d ",Yuna[i][j]+Yeji[i][j]);
    }
    printf("\n");
   }
    return 0;
}
