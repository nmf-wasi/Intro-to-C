#include<stdio.h> 
#include<string.h> 
int main()
{
   char Lia[100];
   char Yuna[100];
   scanf("%s",Lia);
   scanf("%s",Yuna);
   int compare=strcmp(Lia,Yuna);
   if(compare>0)
   {
    printf("%s",Yuna);
   }
    else if(compare<0)
   {
    printf("%s",Lia);
   }
   else{printf("%s ",Yuna);}//print anyofthem if equal
    return 0;
}