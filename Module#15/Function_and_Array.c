#include<stdio.h>
void fun_one(int ar[], int sz)
{
    for(int i=0;i<sz;i++)
    {
        printf("%d\n",ar[i]);
    }
}
void fun_two(double ar[], int sz)
{
    for(int i=0;i<sz;i++)
    {
        printf("%0.3lf\n",ar[i]);
    }
}
int main()
{
   int ar_one[5]={10,20,50,60,90};
   double ar_two[5]={10.34,20.35,50.54,60.897,90.876};
    int sz_one=sizeof(ar_one)/sizeof(int);
    int sz_two=sizeof(ar_two)/sizeof(double);
    fun_one(ar_one,sz_one);
    fun_two(ar_two,sz_two);
    return 0;
}