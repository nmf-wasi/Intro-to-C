#include<stdio.h>
int wasi=20210201;
void seems (void)
{
       printf("adress of wasi=%p\n",wasi);

}

int main()
{
   printf("adress of wasi=%p\n",wasi);
    seems();

    return 0;
}