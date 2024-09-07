#include<stdio.h>
void printing_func(int input)
{
    if(input==0)return;
    printing_func(input-1);
        printf("%d\n",input);

}
int main()
{
   int input;
   scanf("%d",&input);
   printing_func(input);
    return 0;
}