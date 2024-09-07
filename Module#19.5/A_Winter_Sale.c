#include<stdio.h>
int main()
{
   float discount_percentage, current_price;
    float original_price;
   scanf("%f %f",&discount_percentage,&current_price);
   original_price=current_price/(1-(discount_percentage/100));
   printf("%0.2f",original_price);
    return 0;
}