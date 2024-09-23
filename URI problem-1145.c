#include <stdio.h>


int main()
{
    int x, y;
    scanf("%d %d",&x, &y);

    int i = 0, j = 1;
    if(x > 1 && x < 20)
    {
        while(j <= y)
        {
            i++;
            printf("%d ", j);
            if(i == x)
            {
                i = 0;
                printf("\n");
            }
            j++;
        }
    }

    return 0;
}

