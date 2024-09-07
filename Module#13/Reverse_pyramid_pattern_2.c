#include<stdio.h>
#include<string.h>
int main()
{
int input, s ,k;
scanf("%d",&input);
s=0;
k=2*input+1;
for(int i=1;i<=input+1;i++)
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
      s++;
      k=k-2;
        printf("\n");
  }
}