#include<stdio.h>
int main()
{
    int sum=0;
    int i;
    int initial;
    int n;
    scanf("%d %d", &initial,&n);
    for(i=initial;i<=n;i+=1)
    {
        sum+=i;
       
    }
  printf("%d\n",sum);
    return 0;
}