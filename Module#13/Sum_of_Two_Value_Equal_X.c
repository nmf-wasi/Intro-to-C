#include<stdio.h>
int main()
{
   int input;
   scanf("%d",&input);
   int Lia[input];
   
   for(int i=0;i<input;i++)
    {
        scanf("%d", &Lia[i]);
    }
    int match;
    int flag=0;
    scanf("%d",&match);

    for(int i=0;i<input;i++)
    {
        for(int j=i+1;j<input;j++)
        {
            if(Lia[i]==Lia[j])
            {
                flag=1;
            }
        }
    }
        if(flag==1)
            {
                printf("YES\n");
            }
        else
            {
                printf("NO\n");
            }

    return 0;
}

