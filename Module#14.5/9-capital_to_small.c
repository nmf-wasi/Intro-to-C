#include<stdio.h>
char capital_to_small(char Yeji)
{
    char nmf=("%d",Yeji+32);
    return(nmf);
}
int main()
{
    char Yuna;
   scanf("%c",&Yuna);
   char nmf=capital_to_small(Yuna);   
   printf("%c",nmf);

    return 0;
}