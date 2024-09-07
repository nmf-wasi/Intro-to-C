#include<stdio.h>
char small_to_capital(char Yeji)
{
    char nmf=("%d",Yeji-32);
    return(nmf);
}
int main()
{
    char Yuna;
   scanf("%c",&Yuna);
   char nmf=small_to_capital(Yuna);   
   printf("%c",nmf);

    return 0;
}