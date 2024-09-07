#include<stdio.h>
int main()
{
//    pointer is a varibale which keeps adress of other variables
   int nmf;
   int *ptr=&nmf;
   nmf=234;
   printf("value of nmf= %d\n",nmf); 
   printf("value of nmf= %p\n",&nmf); 
   printf("value of nmf= %p\n",&ptr); 
   printf("value of nmf= %p\n",*ptr); 
   printf("value of nmf= %d\n",*ptr); 

   
    return 0;
}