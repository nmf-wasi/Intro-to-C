#include<stdio.h>
int main()
{
    // Given a lowercase alphabet character. You have to print the next character in the alphabet.


   char input;
   scanf("%c",&input);
    
    if(input<122)
    {
        input++;
   printf("%c",input);
    }
    else if(input=122)
    {    printf("a");
    }
}