#include<stdio.h>
void ass(int Lia[], int input)
{
    int temp;
   for(int i=0;i<input;i++)
   {
        for(int j=i+1;j<input;j++)
        {
            if(Lia[j]<Lia[i])
            {
                temp=Lia[i];
                Lia[i]=Lia[j];
                Lia[j]=temp;
            }
        }
   }
    for(int i=0;i<input;i++)
    {
        printf("%d\n",Lia[i]);
    }
}
int main()
{
   int input=3;
   int Yuna[input];
   for(int i=0;i<input;i++)
   {
        scanf("%d",&Yuna[i]);
   }
   int Chaer[input];
   for(int i=0;i<input;i++)
   {
    Chaer[i]=Yuna[i];
   }
   ass(Yuna,input);
   printf("\n");
   for(int i=0;i<input;i++)
    {
        printf("%d\n",Chaer[i]);
    }
    return 0;
}