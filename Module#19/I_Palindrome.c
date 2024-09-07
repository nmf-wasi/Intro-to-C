#include<stdio.h>
#include<string.h>
int main()
{
   char Lia[201];
   char Yuna[201];
   scanf("%s",&Lia);
   strcpy(Yuna,Lia);
   int i=0;
   int j=strlen(Yuna)-1;
   while(i<j)
   {
    char temp =Yuna[i];
    Yuna[i]=Yuna[j];
    Yuna[j]=temp;
    i++;
    j--;
   }
   if(strcmp(Lia,Yuna)==0)
   {
    printf("YES");
   }
   else
   {
    printf("NO");
   }

    return 0;
}