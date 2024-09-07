#include<stdio.h>
int main()
{
    int A;
   scanf("%d",&A);

   int Lia[A];
   for(int i=0;i<A;i++)
   {
    scanf("%d",&Lia[i]);
   }

   int keyword;
   scanf("%d",&keyword);

    int found=0;
    int found_index=-1;
    // index starts from 0, hence, we have to initialate it to -1
   for(int i=0; i<A; i++)
   {
    if(Lia[i]==keyword)
    {
        found++;
        // We can increase it to make a logic to print
        // found_index++;
        // we can't increase to print the value of the index, the index should be same as i
        found_index=i;
        break;
    }
   }
   if(found>0)
   {
    printf("%d", found_index);
   }
   else
    {
    printf("-1");
   }

    
    return 0;
}