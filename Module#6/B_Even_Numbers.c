#include<stdio.h>
int main()
{   int input;
    scanf("%d",&input);
    if(input==1)
    {
        printf("-1\n");
    }
    else 
    {
          int i;
          for(i=1;i<=input;i+=1)
          {
            if(i%2==0)
            {
                    printf("%d\n",i);
            }
                
          }

    }
   
    return 0;
}