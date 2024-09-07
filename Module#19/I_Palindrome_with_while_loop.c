#include<stdio.h>
#include<string.h>
int main()
{
   char Lia[203];
   scanf("%s",Lia);
   int i=0;
   int j=strlen(Lia)-1;
   int flag=1;
   while(i<j)
   {
    if(Lia[i]!=Lia[j])
    {
        flag=0;
        break;
    }
    i++;
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