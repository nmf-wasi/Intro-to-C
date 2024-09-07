#include<stdio.h>
int main()
{
//It's Eid time, and everyone is celebrating! However, Asif wants to distribute gifts to all the children in the neighborhood. He wants to ensure that each child gets an equal number of gifts, and no gift is left unused.

// You are given the total number of gifts Asif has and the number of children in the neighborhood. Your task is to help Asif determine how many gifts each child will receive and whether there will be any gifts left over.

long long int gift, children;
scanf("%lld %lld",&gift,&children);
long long int each=gift/children;
int remain=gift%children;
printf("%lld %d",each,remain);
    return 0;
}