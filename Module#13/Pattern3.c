#include<stdio.h>
#include<string.h>
int main()
{
int input;
scanf("%d",&input);
int k=1;
for(int i=1;i<=input;i++)
  {
    for(int j=1;j<=k;j++)
    {
      printf("%d ",j);
    }
    k++;
    printf("\n");
  }
}