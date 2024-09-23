#include <stdio.h>
int main()
{
    int X, N, sum = 0;
    int test;
    scanf("%d",&test);
    while(test)
    {
        scanf("%d %d", &X, &N);
    int i = 0;
    while(i < N)
    {
        if(X % 2 != 0)
        {
            sum = sum + X;
            i++;
            X++;
        }else
        {
            X++;
        }
    }
    printf("%d\n",sum);
    sum = 0;
    test--;
    }
    return 0;
}
