#include<stdio.h>
#include<string.h>
int main()
{
   char Lia[1000001];
    scanf("%s",Lia);
    int sum=0;
    for(int i=0; i<strlen(Lia); i++)

    {
        sum=sum+Lia[i]-'0';
    }
printf("%d",sum);

    return 0;
}