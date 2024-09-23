#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int fibo[N];

    for(int i = 0; i < N; i++)
    {
        fibo[0] = i;
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
