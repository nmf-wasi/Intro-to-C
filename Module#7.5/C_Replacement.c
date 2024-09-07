#include<stdio.h>
int main()
{
   int inputs;
   scanf("%d",&inputs);

    int Yuna[inputs];
   for(int i=0; i<inputs; i++)
   {
    scanf("%d",&Yuna[i]);
   }

   for(int i=0; i<inputs; i++)
   {
    if(Yuna[i]<0)
    {
        printf("2 ");
    }
    else if(Yuna[i]>0)
    {
        printf("1 ");
    }
    else 
    {
        printf("0 ");
    }
    
   }
    return 0;
}