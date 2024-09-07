#include<stdio.h>
int main()
{
   long long int eyes, mouth, bodies;
   long long int Katryoshkas=0;
   scanf("%lld %lld %lld",&eyes,&mouth,&bodies);
    if (bodies<eyes && bodies<mouth)
 {
    Katryoshkas=bodies;
 }
else if (eyes<bodies && eyes<mouth)
{
    Katryoshkas=eyes;
}
else 
{
   while(eyes >= 1 && mouth >= 1 && bodies >= 1) 
    {
        Katryoshkas++; 
        eyes -= 1; 
        mouth -= 1;
        bodies -= 1;
    }
    while (eyes >= 2 && bodies >= 1) 
    {
        Katryoshkas++; 
        eyes -= 2;
        bodies -= 1;
    }

}
printf("%lld\n",Katryoshkas);
    return 0;
}