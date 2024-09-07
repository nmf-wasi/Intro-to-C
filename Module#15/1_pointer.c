#include<stdio.h>
int main()
{
//    pointer is a varibale which keeps adress of other variables
   int nmf;
   int *ptr=&nmf;

   printf("adress of nmf= %p\n",&nmf); 
   printf("adress of ptr= %p\n",&ptr); 
   printf("adress of nmf= %p\n",ptr); 
   printf("value  of ptr= %p\n",ptr); 
   printf("value  of ptr in Hexa= %p\n",ptr); 
   printf("value  of ptr in decimal= %d\n",ptr); 
   printf("size   of= %d\n",sizeof(ptr)); 
   printf("size   of nmf= %d\n",sizeof(nmf)); 


    return 0;
}