#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main()
{
    int row;
    int collumn;
    scanf("%d %d",&row,&collumn);
    //square matrix
    int Lia[row][collumn];
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<collumn;j++)
        {
            scanf("%d",&Lia[i][j]);
        }
    }
    int flag=0;
    int match;
    scanf("%d",&match);
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<collumn;j++)
        {
            if(Lia[i][j]==match)
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("will take number");
    }
    
    if (flag==1)
    {
        printf("will not take number");
    }

    return 0;
}