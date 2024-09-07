#include<stdio.h>
int main()
{
    int sum=0;
    int i;
    for(i=1;i<=10;i+=1)
    {
       if(i%2!=0)
       {
        printf("%d ODD\n", i);
       }
       else
       {
        printf("%d Even\n",i);
       }
    }
    
    return 0;
}