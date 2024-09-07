#include<stdio.h>
int main()
{
    int input;
    scanf("%d",&input);
    int Lia[input];
    for(int i=0;i<input;i++)
    {
        scanf("%d",&Lia[i]);
    }
    for(int i=0;i<input-1;i++)
    {
        for(int j=i+1;j<input;j++)
        {
            if(Lia[i]>Lia[j])
            {
                int temp=Lia[i];
                Lia[i]=Lia[j];
                Lia[j]=temp;
            }
        }
    }
    int frequency=0;
    for(int i=0;i<input;i++)
    {
        if(Lia[i]==Lia[0])
        {
            frequency++;
        }
    }
    if(frequency%2!=0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }


    return 0;
}