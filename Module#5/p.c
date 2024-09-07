#include<stdio.h>
int main()
{
//    Input Only one line containing a number X (999 < X  ≤  9999)
// 4 digit input, so divide the input by 1000 to get the first digit
    int nmf;
    scanf("%d", &nmf);
    int first_digit=nmf/1000;
    if (first_digit%2==0)
        {
            printf("EVEN\n");
        }
    else
        {
            printf("ODD\n");
        }


    return 0;
}