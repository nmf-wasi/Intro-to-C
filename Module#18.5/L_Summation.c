#include<stdio.h>
long long int sum(long long int ar[], int sz, int index)
{
    if(index==sz) return 0;
    long long int summ=ar[index]+sum(ar, sz, index+1);
    return summ;
}
int main()
{
   int input;
   scanf("%d",&input);
   long long int Lia[input];
   for(int i=0;i<input;i++)
   {
    scanf("%lld",&Lia[i]);  
   }
   long long int summ=sum(Lia, input, 0);
   printf("%lld",summ);
    return 0;
}