#include<stdio.h>
#include<string.h>
long long int is_palindrome(char ar[])
{
    int count=0;
    int i=0; 
    int j=strlen(ar)-1;
    while(i<j)
    {
        if (ar[i]!=ar[j])
        {
            count=1;
        }
        i++;
        j--;
    }
    return count;
}
int main()
{
   char input [10001];
    scanf("%s",input);
    long long int ans=is_palindrome(input);
    if(ans==0)
    {
        printf("Palindrome");
    }
    else 
    {
        printf("Not Palindrome");
    }
    
    return 0;
}