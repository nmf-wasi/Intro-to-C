#include<stdio.h>
#include<string.h>
int main()
{
   int test;
   scanf("%d",&test);
   for(int t=1;t<=test;t++)
   {
   char Wasi[101];
scanf("%s", Wasi);
    
    int length=strlen(Wasi);
    if(length<=10)
    {
        printf("%s\n",Wasi);
    }
    else 
    {
        printf("%c%d%c\n",Wasi[0],length-2,Wasi[length-1]);

    }












   }
}
































