#include<stdio.h>
int main()
{
    int Yuna; 
    float Lia;
    scanf("%d %d", &Yuna, &Lia);
    int nmf=Yuna+Lia;
    int wasi=Yuna-Lia;
    int Ryu=Yuna*Lia;
    float Yeji= Yuna/Lia;

    
    printf("%d, %d, %d, %0.2f\n", nmf, wasi, Ryu, Yeji);

    return 0;
}