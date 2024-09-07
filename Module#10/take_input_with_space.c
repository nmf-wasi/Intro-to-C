#include<stdio.h>
#include<string.h>
int main()
{
   char Lia [16];
   fgets(Lia,16,stdin);
   Lia[4]='\0';
   printf("%s",Lia);
    return 0;
}
