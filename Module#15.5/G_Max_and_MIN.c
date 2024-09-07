#include<stdio.h>
#include<limits.h>
int max ( int Lia[], int sz)
{
    int max=INT_MIN;
   
        for(int i=0;i<sz;i++)
        {
            if(Lia[i]>max)
            {
                max=Lia[i];
            }
        }
    return max;
}
int min ( int Lia[], int sz)
    {
        int min=INT_MAX;
        for(int i=0;i<sz;i++)
        {
        if(Lia[i]<min)
            {
                min=Lia[i];
            }
        }
    return min;
    }
int main()
{
   int input;
   scanf("%d",&input);
   int ar[input];
   for(int i=0;i<input;i++)
    {
        scanf("%d",&ar[i]);
    }
   int maxx=max(ar,input);
   int minn=min(ar,input);
   printf("%d %d",minn,maxx);
    return 0;
}
