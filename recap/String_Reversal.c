#include<stdio.h>
#include<string.h>
int main()
{
   char Yuna[231];
   scanf("%s",Yuna);
   for(int i=strlen(Yuna)-1;i>=0;i--)
   {
    printf("%c",Yuna[i]);
   }
    return 0;
}