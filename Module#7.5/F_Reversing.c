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
    // Print all array positions that store a number less than or equal to 10 and the number stored in that position.
    for(int i=inputs-1; i>=0;i--)
    {
        printf("%d ",Yuna[i]);
    }
    return 0;
}