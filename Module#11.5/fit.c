#include <stdio.h>

int main() 
{
    int N, M;
    scanf("%d %d", &N, &M); 

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); 
    }

    int count[M + 1] = {0};
    
    for (int i = 0; i < N; i++) {
        int num = A[i];
        count[num]++; 
    }

    for (int i = 1; i <= M; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}
