#include<stdio.h>
#include<string.h>
int main()
{
   char Lia[10000000];
   scanf("%s",Lia);
   int count[26]={0};
   int len=strlen(Lia);
    for(int i=0; i<len;i++) 
    {
        int value=Lia[i]-'a';
        count[value]++;
    }
    for(int i=0; i<=25;i++) 
    {
        if(count[i] != 0) 
        {
            printf("%c : %d\n",i+'a',count[i]);
        }
    }

    return 0;
}