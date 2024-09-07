#include<stdio.h>
void fun(int *pnt)
{
    printf("4- address of x in fun= %p\n",pnt);
    printf("5- address of pnt in fun= %p\n",&pnt);
    printf("6- value of x before fun func in fun= %d\n",*pnt);
    *pnt=3242; //derefferencing
    printf("7- value of x after fun func in fun= %d\n",*pnt);

}

int main()
{
   int x=100;
   printf("1- value of x before fun func in main= %d\n",x);
   printf("2- address of x in main= %p\n",&x);
   fun(&x);
   printf("3- value of x after fun func in main= %d\n",x);
    
    return 0;
}