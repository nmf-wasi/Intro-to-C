#include<stdio.h>
int fun( char ar[], int i)
{
    if(ar[i]=='\0') // Base case: if null terminator is encountered, return 0
    return 0;
    int l=fun(ar, i+1);
    return l+1;
}
int main()
{
   char Yuna[17]="IamFinethankuryu";
   int length=fun(Yuna,0);
   printf("%d\n",length);
    return 0;
}