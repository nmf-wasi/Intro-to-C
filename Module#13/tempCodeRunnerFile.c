#include<stdio.h>
int main()
{
   int input;
   scanf("%d",&input);
   int Lia[input];
   for(int i=0;i<input;i++)
    {
        scanf("%d ", Lia[i]);
    }
    for(int i=0;i<input;i++)
    {
        printf("%d",Lia[i]);
    }


    return 0;
}