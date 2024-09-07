#include<stdio.h>
#include<string.h>
int main()
{
int input, s ,k;
scanf("%d",&input);
s=input-1;
k=1;
for(int i=1;i<=input;i++)
  {
    for(int j=1; j<=s;j++)
      {
        printf(" ");
      }
    for(int j=1; j<=k;j++)
      {
        printf("*");
      }
    // line ends
      s--;
      k=k+2;
        printf("\n");
  }
}