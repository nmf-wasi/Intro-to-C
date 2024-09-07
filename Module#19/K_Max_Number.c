#include<stdio.h>
#include<limits.h>
int max(int ar[], int sz, int i)
{
    if(i==sz)
    {
        return INT_MIN;
    }
    int mx=max(ar,sz,i+1);
    if(ar[i]>mx)
    {
        return ar[i];
    }
    else
    {
        return mx;
    }
}
int main()
{
   int input;
   scanf("%d",&input);
    int Lia[input];
    for(int i=0; i<input;i++)
    {
        scanf("%d",&Lia[i]);
    }
    int mx= max(Lia,input,0);
    printf("%d",mx);
    return 0;
}