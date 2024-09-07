#include<stdio.h>
int main()
{
//    pointer is a varibale which keeps adress of other variables

       int nmf;
   int *ptr=&nmf;
   *ptr=234324;

   printf("adress of nmf= %p\n",&nmf); 
   printf("adress of ptr= %p\n",&ptr); 
   printf("adress of nmf= %p\n",ptr); 
   printf("value  of nmf= %d\n",nmf); 
   printf("value  of nmf= %d\n",*ptr); 
   printf("value  of ptr in Hexa= %p\n",ptr); 
   printf("value  of ptr in decimal= %d\n",ptr); 
   printf("size   of ptr= %d\n",sizeof(ptr)); 
   printf("size   of nmf= %d\n\n\n",sizeof(nmf)); 

      float Yuna;
   float *ptr_two=&Yuna;
   *ptr_two=2334.32; 

   printf("adress of Yuna= %p\n",&Yuna); 
   printf("adress of ptr_two= %p\n",&ptr_two); 
   printf("adress of Yuna= %p\n",ptr_two); 
   printf("value  of Yuna= %0.2f\n",Yuna); 
   printf("value  of Yuna= %0.2f\n",*ptr_two); 
   printf("value  of ptr_two in Hexa= %p\n",ptr_two); 
   printf("value  of ptr_two in decimal= %d\n",ptr_two); 
   printf("size   of ptr_two= %d\n",sizeof(ptr_two)); 
   printf("size   of Yuna= %d\n\n\n",sizeof(Yuna)); 

   double Lia;
   double *ptr_three=&Lia;
   Lia=234.324;

   printf("adress of Lia= %p\n",&Lia); 
   printf("adress of ptr_three= %p\n",&ptr_three); 
   printf("adress of Lia= %p\n",ptr_three); 
   printf("value  of Lia= %0.3lf\n",Lia); 
   printf("value  of Lia= %0.3lf\n",*ptr_three); 
   printf("value  of ptr_three in Hexa= %p\n",ptr_three); 
   printf("value  of ptr_threeptr in decimal= %d\n",ptr_three); 
   printf("size   of ptr_three= %d\n",sizeof(ptr_three)); 
   printf("size   of Lia= %d\n\n\n",sizeof(Lia)); 


    return 0;
}