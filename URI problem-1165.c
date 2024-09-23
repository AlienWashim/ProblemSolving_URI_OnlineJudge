#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int N, x;
    int check = 0;
    scanf("%d",&N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &x);
        for( int j = 2; j <= x/2; j++)
        {
            if(x % j == 0)
            {
                check = 1;
            }
        }
        if(check == 1)
        {
            printf("%d nao eh primo\n",x);
        }else{
            printf("%d eh primo\n",x);
        }
        check = 0;
    }

    return 0;
}

