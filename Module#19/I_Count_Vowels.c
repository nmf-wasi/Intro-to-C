#include<stdio.h>
int vowels(char input[],int i)
{
    if(input[i]=='\0') return 0;
    int ans=vowels(input,i+1);
    if (input[i]>='A' && input[i]<='Z')
    {
        input[i]=input[i]+32;
    }
    if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u')
    {
        return ans+1;
    }
    else 
    {
        return ans;
    }

}
int main()
{
   char input[205];
   fgets(input,205,stdin);
   int ans=vowels(input,0);
    printf("%d",ans);
    return 0;
}