#include<stdio.h>
int main()
{
  int input,s,k;
  scanf("%d",&input);
  s=input-1;
  k=1;
    for (int i=1;i<=(input*2)-1;i++) 
    {
      //ekta line
        for(int j=1; j<=s;j++)
        {
          printf(" ");
        }
        if (i%2!=0)
        {
        for(int j=1; j<=k;j++)
        {
          printf("#");
        }
        }
        else 
        {
            for(int j=1; j<=k;j++)
        {
          printf("-");
        }
        }

        // line seshe
        if(i<=input-1)
        {
            s--;
            k=k+2;
        }
        
      else
      {
          s++;
          k=k-2;
      }
        printf("\n");
    }
    return 0;
}