#include <stdio.h>
int main()
{
    int x, sum = 0;
    int check = 0;
    while(check != 1)
    {
        scanf("%d",&x);
        if(x == 0)
        {
            check = 1;
        }
        else
        {
            for(int i = 1; i <= 5; i++)
            {
                if( (x % 2) == 0)
                    {
                        sum = sum + x;
                        x++;
                    }
                    else
                    {
                        x++;
                        i--;
                    }
            }
            printf("%d\n",sum);
            sum = 0;
        }
    }
    return 0;
}

