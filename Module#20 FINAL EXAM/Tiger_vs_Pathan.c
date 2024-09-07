#include<stdio.h>
int main()
{
   int test;
   scanf("%d",&test);
   for(int t=1;t<=test;t++)
   {
        int input;
        scanf("%d",&input);
        char Yuna[input];
        scanf("%s",Yuna);
        int Pathaan=0, Tiger=0;
        for(int i=0;i<input;i++)
        {
            if(Yuna[i]=='T')
            {
                Tiger++;
            }
            else if(Yuna[i]=='P')
            {
                Pathaan++;
            }
        }
        if(Tiger<Pathaan)
        {
            printf("Pathaan\n");
        }
        else if(Tiger>Pathaan)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}