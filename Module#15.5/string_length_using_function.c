#include<stdio.h>
#include <string.h>
int string_length_using_func(char Lia[])
{
    int count=0;
    for(int i=0; ;i++)
    {
        if(Lia[i]=='\0') 
        {
            break;
        }
        count++;
    }
    printf("strlen in other func= %d\n",count);
    return count;
}
int main()
{
   char Yuna[10001];//with null value
   scanf("%s",Yuna);
   int length=string_length_using_func(Yuna);
   printf("recieved length from the other func= %d\n",length);
   printf("strlen in main func= %d\n",strlen(Yuna));

    return 0;
}