#include<stdio.h>
#include<string.h>
int main()
{
   char Yuna[200],Yeji[100];
   scanf("%s %s",Yuna,Yeji);
    int k=strlen(Yuna);
   for(int i=0;i<=strlen(Yeji);i++)
   {
    Yuna[k]=Yeji[i];
    k++;
   }
   printf("%s %s",Yuna,Yeji);
    return 0;
}