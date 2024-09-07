#include<stdio.h>
void joke(int i)
{
    if(i>5){return;}
    printf("%d\n",i);
    joke(i+1);
}

int main()
{
   joke(1);
    return 0;
}