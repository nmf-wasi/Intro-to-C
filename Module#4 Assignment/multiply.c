#include <stdio.h>

int main() {
   int  N;
   scanf("%d",&N);
   int remain=N-1000;
    if(N>1000)
     {
        printf("I will buy Punjabi\n");
        if(remain>=500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }

     }
    else 
    {
        printf("Bad luck!\n");
    }
    return 0;
}