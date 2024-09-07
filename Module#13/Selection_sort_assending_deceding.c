#include<stdio.h>
int main()
{
   int input;
   scanf("%d",&input);
   int Yuna[input];
   for(int i=0;i<input;i++)
   {
        scanf("%d",&Yuna[i]);
   }
   for(int i=0;i<input-1;i++)
   {
        for(int j=i+1;j<input;j++)
        {
            if(Yuna[i]<Yuna[j])
            {
                int temp=Yuna[i];
                Yuna[i]=Yuna[j];
                Yuna[j]=temp;
            }
        }
   }
   for(int i=0;i<input;i++)
   {
        printf("%d",Yuna[i]);
   }
   
    return 0;
}