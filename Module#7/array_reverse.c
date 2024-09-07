#include<stdio.h>
int main()
{
    int n;
   scanf("%d",&n);
   int ar[n];
   for(int i=n-1;i>=0;i--)
   {
    scanf("%d\n",&ar[i]);
        printf("%d\n",ar[i]);
   }
   
    return 0;
}