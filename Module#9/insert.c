#include<stdio.h>
int main()
{
   int n; //array size given
   scanf("%d",&n);
   int ar[n+1]; //array size taken larger than provided

    for(int i=0;i<n;i++)//taking input to array and i will be less than n since the last index will be empty after taking inputs
    {
        scanf("%d",& ar[i]);
    }

    int position,value;
    scanf("%d %d",&position ,&value);

    for(int i=n;i>=position;i--) //usually, the lopp starts from (n-1) since the last index is that, however, this time loop will start from i, since the last index is i
    {
        ar[i]=ar[i-1];
    }
     ar[position]=value;
    for(int i=0;i<=n;i++)
    {
        printf("%d ", ar[i]);
    }
    

    return 0;
}