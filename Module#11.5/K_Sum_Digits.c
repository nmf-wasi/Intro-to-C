#include<stdio.h>
#include<string.h>
int main()
{
   int input;
   scanf("%d",&input);
   int sum=0;
   char Lia[input];
   scanf("%s",Lia);
   for(int i=0;i<input;i++)
   {
    int Yuna=Lia[i]-'0';
    sum+=Yuna;
   }
   

   printf("%d",sum);
   
    return 0;
}