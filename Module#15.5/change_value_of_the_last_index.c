#include<stdio.h>
void Yuna(int Yeji[], int sz)
{
    Yeji[sz-1]=100;
    for(int i=0;i<sz;i++)
    {
        printf("%d ",Yeji[i]);
    }
}
int main()
{
   int input;scanf("%d",&input);
   int Lia[input];
   for(int i=0;i<input;i++)
    {
        scanf("%d",&Lia[i]);
    }
   Yuna(Lia,input);
    return 0;
}