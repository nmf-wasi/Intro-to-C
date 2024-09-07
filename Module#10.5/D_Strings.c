#include<stdio.h>
#include<string.h>
int main()
{
   char Yuna [101];
   char Yeji [101];
   char Lia[101];
   scanf("%s",Yuna);
   scanf("%s",Yeji);
   printf("%d %d\n",strlen(Yuna),strlen(Yeji));
   for(int i=0;i<strlen(Yuna);i++)
   {
    Lia[i]=Yuna[i];
   }

    for(int i=0;i<strlen(Yeji);i++)
    {
        Lia[strlen(Yuna)+i]=Yeji[i];
    
    }
    int st=strlen(Yuna)+strlen(Yeji);
    Lia[st]='\0';
    printf("%s\n",Lia);

    int temp=Yuna[0];
    Yuna[0]=Yeji[0];
    Yeji[0]=temp;
    printf("%s %s",Yuna,Yeji);
    

    return 0;
}
