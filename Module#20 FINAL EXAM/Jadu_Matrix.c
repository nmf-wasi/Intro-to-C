#include<stdio.h>
int main()
{
   int row, collumn;
   scanf("%d %d",&row,&collumn);
   int Lia[row][collumn];
   for(int i=0; i<row; i++)
   {
    for(int j=0;j<collumn;j++)
    {
        scanf("%d",&Lia[i][j]);
    }
   }
   int flag=1;
   for(int i=0; i<row; i++)
   {
    for(int j=0;j<collumn;j++)
    {
        if(i==j)
        {
            if(Lia[i][j]!=1)
            {
                flag=0;
                break;
            }
        }
        else if(i+j==row-1)
        {
            if(Lia[i][j]!=1)
            {
                flag=0;
                break;
            }
        }
        else if(i!=j)
        {
            if(Lia[i][j]!=0)
            {
                flag=0;
                break;
            }
        }
    }
   }
    if(flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}