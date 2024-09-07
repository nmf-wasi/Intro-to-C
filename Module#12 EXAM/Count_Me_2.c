#include<stdio.h>
#include<string.h>
int main()
{
   char Lia[100001];
   scanf("%s",Lia);
   int consonent=0;
   for(int i=0; i<=strlen(Lia); i++)
   {
    if(Lia[i]=='a')
    {
        consonent++;
    }
    if(Lia[i]=='e')
    {
        consonent++;
    }
    if(Lia[i]=='i')
    {
        consonent++;
    }
    if(Lia[i]=='o')
    {
        consonent++;
    }
    if(Lia[i]=='u')
    {
        consonent++;
    }
   }
   int total=0;
   for(int i=0; i<strlen(Lia); i++)
   {
        total++;
   }
   printf("%d",total-consonent);
    return 0;
}