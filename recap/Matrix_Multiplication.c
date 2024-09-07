#include<stdio.h>
int main()
{
  // printf("ENTER MATRIX-A DIMENSION m:n\n");
   int m, n;
   scanf("%d %d",&m,&n);
   int Lia[m][n];
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        scanf("%d",&Lia[i][j]);
    }
   }
  // printf("ENTER MATRIX-B DIMENSION p:q\n");
   int p, q;
   scanf("%d %d",&p,&q);
   int Yuna[p][q];
   for(int i=0;i<p;i++)
   {
    for(int j=0;j<q;j++)
    {
        scanf("%d",&Yuna[i][j]);
    }
   }
   if(n!=p)
   {
    printf("NOT POSSIBLE");
   }
   int resultant_matrix[m][q];

   for(int i=0;i<m;i++)
   {
    for(int j=0;j<q;j++)
    {
        resultant_matrix[i][j]=0;
        for(int k=0;k<n;k++)
        {
            resultant_matrix[i][j]=Lia[i][k]*Yuna[k][j];
        }
    }
   }
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<q;j++)
    {
        printf("%d ",resultant_matrix[i][j]);
    }
        printf("\n");
   }

    return 0;
}