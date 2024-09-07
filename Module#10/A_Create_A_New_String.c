#include<stdio.h>
#include<string.h>
int main()
{
   char Lia [1000], Yuna[1000];
   scanf("%s",Lia);
   scanf("%s",Yuna);
   int sum_Lia=strlen(Lia), sum_Yuna=strlen(Yuna);
    printf("%d %d\n",sum_Lia,sum_Yuna);
    printf("%s %s",Lia,Yuna);

    return 0;
}