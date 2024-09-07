#include<stdio.h>
int main()
{
    int input,k;
    scanf("%d %d",&input,&k);
    int Lia[input];
    for(int i=0;i<input;i++)
    {
        scanf("%d",&Lia[i]);
    }
    for(int i=0;i<input-1;i++)
    {
        for(int j=i+1;j<input;j++)
        {
            if(Lia[i]<Lia[j])
            {
                int temp=Lia[i];
                Lia[i]=Lia[j];
                Lia[j]=temp;
            }
        }
    }
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=Lia[i];
    }
    printf("%d",sum);
    return 0;
}