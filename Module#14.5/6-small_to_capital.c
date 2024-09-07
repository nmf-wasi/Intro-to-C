#include<stdio.h>
char small_to_capital()
{
    char Yuna;
   scanf("%c",&Yuna);
    char nmf=("%d",Yuna-32);
    return(nmf);
}
int main()
{
    
   char nmf=small_to_capital();   
   printf("%c",nmf);

    return 0;
}