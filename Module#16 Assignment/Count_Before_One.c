#include<stdio.h>
long long int count_before_one(int ar[], int sz)
{
    int count=0;
    for(int i=0;i<sz;i++)
    {
        if (ar[i]==1)
        {
            break;
        }
        else 
        {
            count++;
        }
    
    }

return count;
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
   long long int count=count_before_one(ar,input);
   printf("%lld",count);
    return 0;
}