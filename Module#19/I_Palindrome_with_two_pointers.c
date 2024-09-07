#include<stdio.h>
#include<string.h>
int main()
{
   char Lia[203];
   scanf("%s",Lia);
   int i=0;
   int j=strlen(Lia)-1;
   int flag=1;
   for(int i=0;i<j;i++)
   {
    if(Lia[i]!=Lia[j])
    {
        flag=0;
        break;
    }
    j--;
   }
   if(flag==1)
   {
    printf("YES");
   }
   else
   {
    printf("NO");
   }

    return 0;
}