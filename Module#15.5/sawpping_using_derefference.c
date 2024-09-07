#include<stdio.h>
void swap_it(int Lia[], int size)
{
    int temp=*Lia;
    *Lia=*(Lia+1);
    *(Lia+1)=temp;
    for(int i=0;i<2;i++){printf("%d ",Lia[i]);}
    
}
int main()
{
   int ar[2];
   for(int i=0;i<2;i++){scanf("%d",&ar[i]);}

   swap_it(ar,2);
    return 0;
}