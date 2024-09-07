#include<stdio.h>
void ajaira(int Lia)
{
    for(int i=1;i<=Lia;i++)
    {
        if(i<Lia)
        printf("%d ",i);
        else if(i=Lia)
        printf("%d",i);
    }
}
int main()
{
   int input;
   scanf("%d",&input);
    ajaira(input);
    return 0;
}