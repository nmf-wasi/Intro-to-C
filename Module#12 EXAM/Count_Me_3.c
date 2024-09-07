#include<stdio.h>
#include<string.h>
int main()
{
    int test;
   scanf("%d",&test);
for(int t=1;t<=test;t++)
{
    int capital=0, small=0, digits=0;
    char Lia[10001];
    scanf("%s",Lia);
    for(int i=0;i<=strlen(Lia);i++)
    {
        if(Lia[i]>='A' && Lia[i]<='Z')
        {
            capital++;
        }
        if(Lia[i]>='a' && Lia[i]<='z')
        {
            small++;
        }
        if(Lia[i]>='0' && Lia[i]<='9')
        {
            digits++;
        } 
        
    }
printf("%d %d %d\n", capital, small, digits);


}
    return 0;
}
