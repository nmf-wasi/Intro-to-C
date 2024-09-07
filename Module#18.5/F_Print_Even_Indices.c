#include<stdio.h>
void print_even_index(int ar[], int sz, int index)
{
    if(index==sz) return;
    print_even_index(ar, sz, index+1);
    if(index%2==0)
    {
        printf("%d",ar[index]);
        if(index<sz)
        {
            printf(" ");
        }
    }
    
}
int main()
{
   int input; 
   scanf("%d",&input); 
   int Lia[input];
   for(int i=0;i<input;i++)
    {
        scanf("%d",&Lia[i]);
    }
    print_even_index(Lia,input,0);
    return 0;
}