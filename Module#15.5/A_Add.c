#include<stdio.h>
int sum(int Lia, int Wasi)
{
    int add=Lia+Wasi;
    return add;
}
int main()
{
   int Yuna,Yeji;
   scanf("%d %d",&Yuna,&Yeji);
    int plus=sum(Yuna, Yeji);
    printf("%d",plus);
    return 0;
}