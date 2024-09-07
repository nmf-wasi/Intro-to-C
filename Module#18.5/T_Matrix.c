#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main()
{
    int input;
    scanf("%d",&input);
    int row=input;
    int collumn=input;//square matrix
    int Lia[row][collumn];
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<collumn;j++)
        {
            scanf("%d",&Lia[i][j]);
        }
    }
    int primary_diagonal=0;
    int secondary_diagonal=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<collumn;j++)
        {
            if(i==j)
            {
                primary_diagonal+=Lia[i][j];
            }
            if(i+j==row-1)
            {
                secondary_diagonal+=Lia[i][j];
            }
        }
    }
    int ans=primary_diagonal-secondary_diagonal;
        if(ans<0)
        {
            ans=ans*-1;
            printf("%d",ans);
        }
        else 
        {
            printf("%d",ans);
        }
    return 0;
}