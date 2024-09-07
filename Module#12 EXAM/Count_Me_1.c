#include<stdio.h>
int main()
{
   int N;
   scanf("%d",&N);
   long long int Lia[N];
   for(int i=0;i<N;i++)
    {
    scanf("%lld",&Lia[i]);
    }
    int Yuna=0, Yeji=0;
    for(int i=0;i<N;i++)
    {
    if(Lia[i]%2==0)
    {
        Yuna++;
    }
    else if(Lia[i]%3==0)
    {
        Yeji++;
    } 
    } 
    printf("%d %d",Yuna, Yeji);
    return 0;
}