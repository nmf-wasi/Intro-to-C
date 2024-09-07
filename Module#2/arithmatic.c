#include<stdio.h>
int main()
{
int Lia=10, Yuna=20, Yeji=21, nmf=2021, wasi=7;

int sum_1=Lia+Yuna, min=Lia-Yuna, mul_1=Yeji*nmf, mul_2=nmf*Yeji; 
int dvd_1=nmf/Lia;
int dvd_2=Lia/nmf;
int dvd_3=nmf*1.0/Lia;
int dvd_4=nmf/Lia*1.0;
float dvd_5=nmf/Lia*1.0;
float dvd_6=nmf*1.0/Lia;
int mod_1=nmf%Yeji;
int mod_2=Yeji%nmf;
float mod_3=Yeji%nmf;
float mod_4=nmf%Yeji;
printf("sum_1=%d\nmin=%d\nmul_1=%d\nmul_2=%d\ndvd_1=%d\ndvd_2=%d\ndvd_3=%d\ndvd_4=%d\ndvd_5=%f\ndvd_6=%f\nmod_1=%d\nmod_2=%d\nmod_3=%f\nmod_4=%f", sum_1,min,mul_1,mul_2, dvd_1,dvd_2,dvd_3,dvd_4,dvd_5,dvd_6,mod_1,mod_2,mod_3,mod_4);

    return 0;
}