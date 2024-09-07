#include<stdio.h>
#include<string.h>
int main()
{
int input;
scanf("%d",&input);
int k=input;
for(int i=k;i>0;i--)
{
for (int j=1; j<=k;j++)
{
printf("*");
}
printf("\n");
k--;
}
return 0;
}