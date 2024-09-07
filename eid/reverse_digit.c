#include<stdio.h>
int main()
{
   int input;
//    one 4 digit integer number N (1000<=N<=9999).
   scanf("%d",&input);
    int one=input/1000,two=((input%1000)-(input%100))/100,three=((input%100)-(input%10))/10,four=input%10;
    printf("%d%d%d%d",four,three,two,one);

    
    return 0;
}