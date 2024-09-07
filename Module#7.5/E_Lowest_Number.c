#include<stdio.h>
#include<limits.h>
int main()
{
   int A;
   scanf("%d",&A);

   int Lia[A];
   for(int i=0;i<A;i++)
   {
    scanf("%d",&Lia[i]);
   }
   int min=INT_MAX;
   int index;
   // index starts from 0, hence, we have to initialate it to -1

    for(int i=0;i<A;i++)
    {
        if(Lia[i]<min)
        {
            min=Lia[i];
            index=i+1;

            //index start from 0 but position start from 1
        }
    }
printf("%d %d",min, index);


    return 0;
}