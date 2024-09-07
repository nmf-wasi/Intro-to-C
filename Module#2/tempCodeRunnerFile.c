#include<stdio.h>
int main()
{
    // nested if and else
    int USD;
    scanf("%d", &USD);
    if (USD>=25000)
    { printf("Going to be Spain\n");
            if (USD>=400000)
            {   printf("Going to Australia \n");
                 if (USD>60000)
                  {
                     printf("Going to USA\n");
                  }
                  else
                  {
                    printf("Going home");
                  }
            }
            else 
            {
                printf("Going Hell\n");
            }      
    }
    else if (USD>22000)    
    {
        printf("Going to China\n");
    }
    else
    {
        printf("Going to stay at home\n");
    }
    return 0;
}