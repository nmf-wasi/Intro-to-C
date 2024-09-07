#include<stdio.h>
#include<string.h>
int main()
{
int input, k=1;
scanf("%d",&input);
for(int i=0;i<input;i++)
{
for (int j=1; j<=k;j++)
{
printf("*");
}
  printf("\n");
  k++;
}
return 0;
}