#include<stdio.h>
char capital_to_small()
{
    char Yuna;
   scanf("%c",&Yuna);
    char nmf=("%d",Yuna+32);
    return(nmf);
}
int main()
{
    
   char nmf=capital_to_small();   
   printf("%c",nmf);

    return 0;
}