#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>=97 && a<=122)
    {
        //small to capital
        int Lia=a-32;
        printf("%c", Lia);
    }
    else 
    {
        int Yuna=a+32;
        // capital to small
        printf("%c",Yuna); 
    }
    return 0;
}
