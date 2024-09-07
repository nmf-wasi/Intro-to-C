#include<stdio.h>
#include<string.h>
int main()
{
    char Lia[1000000];
    fgets(Lia, 1000001,stdin);
    int i=0;
    while(Lia[i]!='\\')
    {
        printf("%c",Lia[i]);
        i++;
    }
   
    return 0;
}
