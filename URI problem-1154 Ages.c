#include <stdio.h>
int main()
{
    int age, count = 0;
    float sum, average;
    int check = 0;

    while(check != 1)
    {
        scanf("%d",&age);
        if(age > 0)
        {
            sum = sum + age;
            count++;
        }
        else
        {
            check = 1;
        }
    }

    average = sum / count;
    printf("%.2f\n",average);

    return 0;
}
