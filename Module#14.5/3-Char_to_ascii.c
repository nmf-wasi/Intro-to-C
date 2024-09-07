#include<stdio.h>
int char_to_ascii(char Yeji)
{
  
  int nmf=("%d",Yeji);
  return nmf;
}
int main()
{
    char Yuna;
  scanf("%c",&Yuna);
  int Wasi= char_to_ascii(Yuna);
  printf("%d",Wasi);
  return 0;
}