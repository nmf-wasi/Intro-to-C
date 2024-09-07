#include<stdio.h>
#include<string.h>
int main()
{
   int input,check;
   scanf("%d %d",&input ,&check);
   int Lia[input];

   for(int i=0; i<input;i++)
   {
    scanf("%d",&Lia[i]);
   }

    int count[check + 1];
    for(int i = 0; i <= check; i++) 
    {
        count[i] = 0;
    }

   for(int i=0; i<input;i++)
   {
    int value=Lia[i];
    count[value]++;
   }
   for(int i=1; i<=check;i++)
   {
   printf("%d\n",count[i]);
   }

    return 0;
}
