#include<stdio.h>
int main()
{
    int test;
   scanf("%d",&test);
for(int t=1;t<=test;t++)
{
   int man,days,add;
   scanf("%d %d %d",&man,&add,&days);

   int n=man+add;

   int ans=((man*days)/n);
   int final=days-ans;
   printf("%d\n",final);
}
        return 0;

}
