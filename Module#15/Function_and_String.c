#include<stdio.h>
#include<string.h>
void fun (char ar[])
{
    printf("%d\n", strlen(ar));
    printf("%s\n", ar);
}

int main()
{
    char ar[20]="Hello";
    printf("%d\n", strlen(ar));
    fun(ar);

    return 0;
}
