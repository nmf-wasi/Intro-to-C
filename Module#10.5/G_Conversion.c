#include<stdio.h>
#include<string.h>

int main()
{
   char Lia [100001];
   scanf("%s",Lia);
   for(int i=0;i<strlen(Lia);i++)
   {
    if(Lia[i]==',')
    {
        Lia[i]=' ';
    }
    else if (Lia[i]>='A'&& Lia[i]<='Z')
    {
        Lia[i]+=32;
    }
    else if (Lia[i]>='a' && Lia[i]<='z')
    {
        Lia[i]-=32;
    }
                printf("%c",Lia[i]);
   }
    return 0;
}