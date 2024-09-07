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
            if (i+j==row-1)
            {
                if(Lia[i][j]!=Lia[0][collumn-1])
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
        printf("SECONDARY SCALAR MATRIX");
    }
   else 
    {
        printf("NOT SCALAR MATRIX");
    }
    return 0;
}