#include<stdio.h>
void Lia(int i)
{
    if(i==6)
    return;
    Lia(i+1);
    printf("%d\n",i);
    
        
}
int main()
{
   Lia(1);
    return 0;
}