#include<stdio.h>
int main()
{
   
// Given a number between 10 and 99, determine whether it is lucky or not.
// A number of two digits is lucky if one of its digits is divisible by the other.
  int input;
  scanf("%d",&input);
  int a=input/10, b=input%10;
  if(a%b==0)
  {
    printf("YES");
  }
  else if(b%a==0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }  
    return 0;
}