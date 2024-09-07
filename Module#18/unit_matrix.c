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
   int flag=1;
   if(row!=collumn)
   flag=0;
   for(int i=0;i<row;i++)
   {
        for(int j=0;j<collumn;j++)
        {
            if (i==j)
            {
                if(Lia[i][j]!=1)
                {
                    flag=0;
                }
                
            }
            else if(Lia[i][j]!=0)
            { 
                flag=0;
            }
        }
   }
   if(flag==1)
    {
        printf("UNIT MATRIX");
    }
   else 
    {
        printf("NOT UNIT MATRIX");
    }
    return 0;
}