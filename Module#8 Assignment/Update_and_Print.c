#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int Yuna[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&Yuna[i]);
   }
 int index_to_change, change_to;
 scanf("%d %d",&index_to_change,&change_to);

 Yuna[index_to_change]=change_to;

   for(int i=n-1;i>=0;i--)
   {
    printf("%d ",Yuna[i]);
   }



       return 0;
}