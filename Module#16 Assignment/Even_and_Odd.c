#include<stdio.h>
void odd_even()
{
    int input;
        scanf("%d",&input);
    int even=0;
    int odd=0;
    
    int ar[input];
        for(int i=0;i<input;i++)
        {
            scanf("%d",&ar[i]);
        }
    for(int i=0; i<input;i++)
    {
        if(ar[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
        printf("%d %d", even, odd);
}
    int main()
    {
        
        //found it by myself after a day :) needed to use the scanf inside the other function.  
        
        odd_even();
        return 0;
    }
