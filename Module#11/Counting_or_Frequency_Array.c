#include<stdio.h>
#include<string.h>
int main()
{
   int input;
   scanf("%d",&input);
   int Lia[input];
   for(int i=0;i<input;i++)
   {
    scanf("%d",&Lia[i]);
   }
   int count[10] = {0};
   for(int i=0;i<input;i++)
   {
    int val=Lia[i];
    count[val]++;
   }
    for (int i=0; i<=8; i++) 
    {
    printf("%d - %d\n", i, count[i]);
    }
    return 0;
}