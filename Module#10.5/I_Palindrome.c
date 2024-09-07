#include<stdio.h>
#include<string.h>
int main()
{
   char Lia[1000000];
   scanf("%s",Lia);
   int i=0, j=strlen(Lia)-1;
   int ans=1;
   while(i<j)
   {
    if(Lia[i]!=Lia[j])
    {
        ans=5;
    }
    i++;j--;
   }
   if (ans==5) 
   {
    printf("NO");
   }
   else
   {
    printf("YES");
   }
    return 0;
}