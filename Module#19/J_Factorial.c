#include<stdio.h>
long long int factorail( long long int input)
{
    if(input==0)
    {
        return 1;
    }
    // base case

    long long int ans=factorail(input-1);
    return ans*input;

}
int main()
{
   long long int input;
   scanf("%lld",&input);
   long long int ans= factorail(input);
   printf("%lld",ans);


    return 0;
}