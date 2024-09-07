#include<stdio.h>
int main()
{
   int row,collumn;
   scanf("%d %d",&row,&collumn);
   int Lia[row][collumn];
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<collumn;j++)
    {
        scanf("%d",&Lia[i][j]);
    }
   }
   int element=row*collumn;
   int count_zero=0;
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<collumn;j++)
    {
        if(Lia[i][j]==0) count_zero++;
    }
   }
    if(count_zero==element) printf("NULL MATRIX");
    else printf("NOT NULL MATRIX");
    return 0;
}