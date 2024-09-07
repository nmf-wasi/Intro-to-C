#include<stdio.h>
void lia(int a[], int length, int i)
{
    if (i==length)
    return;
    printf("%d\n",a[i]);
    lia(a,length,i+1);
}
int main()
{ 
   int input;
   scanf("%d",&input);
   int ar[input];
   for(int i=0; i<input; i++)
   {
    scanf("%d",&ar[i]);
   }
   lia(ar,input,0);
    return 0;
}