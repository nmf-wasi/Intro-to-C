#include<stdio.h>
void printing_func(int input)
{
            if(input==0)return;
            printf("%d",input);
            if(input>1) 
            printf(" ",input);
    printing_func(input-1);

}
int main()
{
   int input;
   scanf("%d",&input);
   printing_func(input);
    return 0;
}