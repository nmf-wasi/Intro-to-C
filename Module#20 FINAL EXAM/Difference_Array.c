#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
   int test;
   scanf("%d",&test);
   for(int t=1;t<=test;t++)
   {
        int input;
        scanf("%d",&input);
        int Lia[input];
        for(int i=0;i<input;i++)
        {
            scanf("%d",&Lia[i]);
        }
        int Yuna[input];
        for(int i=0;i<input;i++)
        {
            Yuna[i]=Lia[i];
        }
        for(int i=0; i<input;i++)
        {
            for(int j=0; j<input;j++)
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
            printf("%d ",abs(Yuna[i]-Lia[i]));
        }
        printf("\n");
}
    return 0;

}