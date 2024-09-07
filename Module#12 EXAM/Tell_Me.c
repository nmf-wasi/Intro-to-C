#include<stdio.h>
#include<string.h>
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
    int scan;
    scanf("%d",&scan);
    int gottcha=0;

    for(int i=0;i<input;i++)
    {
        if(Lia[i]==scan)
        {
            gottcha++;
        }
        
    }
    if(gottcha>0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
}
return 0;
}