#include<stdio.h>
void capital_to_small(char Yeji)
{
    char nmf=("%d",Yeji+32);
      
   printf("%c",nmf);

}
int main()
{
    char Yuna;
   scanf("%c",&Yuna);
   capital_to_small(Yuna); 
    return 0;
}