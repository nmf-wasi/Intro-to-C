#include<stdio.h>
int main()
{
   int row, collumn;
   scanf("%d %d",&row,&collumn);
   int Lia[row][collumn];
   for(int i=0;i<row;i++)
   {
    for(int j=0; j<collumn;j++)
    {
        scanf("%d",&Lia[i][j]);
    }
   }
   int exact_row;
   scanf("%d",&exact_row);
   for(int j=0;j<collumn;j++)
    {
    
        printf("%d ",Lia[exact_row][j]);
    }

    return 0;
}





