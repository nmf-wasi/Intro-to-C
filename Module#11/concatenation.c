#include<stdio.h>
#include<string.h>
int main()
{
   char Yuna[200],Yeji[100];
   scanf("%s %s",Yuna,Yeji);
    strcat(Yeji,Yuna);
    printf("%s %s",Yuna,Yeji);
    return 0;
}