#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int Yuna[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&Yuna[i]);
   }
   int pos=0,neg=0;
   for(int i=0;i<n;i++)
   {
    if(Yuna[i]>0)
    {pos+=Yuna[i];}
    else if(Yuna[i]<0)
    {neg+=Yuna[i];}
   }

   printf("%d %d",pos,neg);
    return 0;
}