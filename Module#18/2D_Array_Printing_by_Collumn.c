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
   int exact_collumn;
   scanf("%d",&exact_collumn);
   for(int i=0;i<row;i++)
    {
    
        printf("%d ",Lia[i][exact_collumn]);
    }

    return 0;
}





