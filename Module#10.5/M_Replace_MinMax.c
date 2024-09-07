#include<stdio.h>
#include<limits.h>
#include<string.h>
int main()
{
   int nmf;
   scanf("%d",&nmf);
   int Lia[nmf];
   int min=INT_MAX,max= INT_MIN;
   int min_index,max_index;
   for(int i=0;i<nmf;i++)
   {
    scanf("%d",&Lia[i]);   
   }
   for(int i=0;i<nmf;i++)
   {
    if(Lia[i]<min)
        {
            min=Lia[i];
            min_index=i;
        }
        
    }
    for(int i=0;i<nmf;i++)
   {
    if(Lia[i]>max)
        {
            max=Lia[i];
            max_index=i;
        }
    } 

    int temp=Lia[min_index]; 
    Lia[min_index]=Lia[max_index]; 
    Lia[max_index]=temp;
    
    for(int i=0; i<nmf;i++)
    {
        printf("%d ",Lia[i]);
    }

    return 0;
}