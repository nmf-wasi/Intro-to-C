#include<stdio.h>
int main()
{
   char Yeji[100],Yuna[100];
   scanf("%s %s", Yeji,Yuna);
   int i=0;
   while(1)
   {
    if(Yeji[i]=='\0'&&Yuna[i]=='\0')
    {
        printf("SAME");
        break;
    }
    else if (Yeji[i]=='\0')
    {
        printf("Yeji is smol");
        break;
    }
    else if (Yuna[i]=='\0')
    {
        printf("Yuna is smol");
        break;
    }

    if(Yeji[i]==Yuna[i])
    {
        i++;
    }
    else if(Yeji[i]>Yuna[i])
    {
        printf("Yeji is smol");
        break;
    }
    else if(Yuna[i]<Yeji[i])
    {
        printf("Yuna is smol");
        break;
    }
   }


    return 0;
}