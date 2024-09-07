#include<stdio.h>
#include<string.h>

int main()
{
   char Lia[100];
   scanf("%s",Lia);
   int count[26]={0};
    for(int i=0;i<strlen(Lia);i++)
        {
            int value=Lia[i]-'a';
            count[value]++;
        }
    for(int i=0;i<strlen(Lia);i++)
    {
        int value=Lia[i]-'a';
        if(count[value]!=0)
        {
        printf("%c - %d\n",value+97, count[value]);    
        }
        
    }

    return 0;
}