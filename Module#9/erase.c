#include<stdio.h>
int main()
{
    int n; //array size given
   scanf("%d",&n);
   int ar[n]; 

    for(int i=0;i<n;i++)
    {
        scanf("%d",& ar[i]);
    }

    int position,value;
    scanf("%d",&position );

    for(int i=position;i<n;i++)
    {
        ar[i]=ar[i+1];
    }

    for (int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
   
    return 0;
}