#include<stdio.h>
int main()
{
   int n;
   while(scanf("%d",&n) != EOF)
{
    // n is taken as input, use n to process
    if(n==1999)
    {
     printf("Correct\n");
     break;
    }    
    else
        {
    printf("Wrong\n");
        }
}
    return 0;
}