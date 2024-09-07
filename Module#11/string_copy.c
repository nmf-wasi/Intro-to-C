#include<stdio.h>
#include<string.h>
int main()
{
   char Yuna [100];
   char Yeji [100];
   scanf("%s %s", Yuna,Yeji);
   strcpy(Yeji,Yuna);
//    for(int i=0;i<=strlen(Yeji);i++)
//    {
//     Yuna[i]=Yeji[i];
//    }
   printf("%s %s", Yuna,Yeji);
    return 0;
}