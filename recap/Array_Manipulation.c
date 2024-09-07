#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
int main()
{
   int input;
   scanf("%d",&input);
   int Lia[input];
   for(int i=0;i<input;i++)
   {
       scanf("%d",&Lia[i]);
   }
   int sum=0,max=INT_MIN,min=INT_MAX;
   
   for(int i=0;i<input;i++)
   {
        sum+=Lia[i];
        if(Lia[i]<min)
        {
            min=Lia[i];
        }    
        if(Lia[i]>max)
        {
            max=Lia[i];
        }    
   }
   float average=sum/(float)input;
   printf("sum=%d\naverage=%f\nminimum=%d\nmaximum=%d\n",sum,average,min,max);
    return 0;
}