#include<stdio.h>
#include<string.h>
int main()
{
int input, s ,k;
scanf("%d",&input);
s=(input/2)+5;
k=1;
int p=6+(input/2);
for (int i=1;i<=p;i++) 
    {
        for(int j=1; j<=s;j++)
      {
        printf(" ");
      }
        for (int j=1;j<=k;j++) 
        {
            printf("*");
        }
        printf("\n");
        s--;
        k += 2;
    }
for (int i=1; i<=5; i++) 
    {
        // Print spaces
        for (int j=1; j<=5;j++) 
        {
            printf(" ");
        }
        for(int j=1; j<=input;j++)
      {
        printf("*");
      }
      printf("\n");
    }

    return 0;

}