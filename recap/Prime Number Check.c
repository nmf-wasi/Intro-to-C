#include<stdio.h>
#include<math.h>
int main()
{
   int input;
   scanf("%d",&input);
   int flag=0;
   for(int i=2;i<=sqrt(input);i++)
   {
    if(input%i==0)
    {
        flag=1;
        break;
    }
   }
   if(flag==0)
   {
    printf("PRIME NUMBER");
   }
   else
   {
    printf("NOT A PRIME NUMBER");
   }
    return 0;
}