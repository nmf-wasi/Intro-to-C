#include<stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka>=10000)
    {
        printf("Gucci Bag");
    }
    else if(taka>=5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something");
    }
    
    if (taka>20000)
    {
        printf("\nGucci Belt");
    }


    return 0;
}