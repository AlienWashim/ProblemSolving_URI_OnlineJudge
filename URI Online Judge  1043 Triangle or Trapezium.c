#include <stdio.h>
int main()
{
    float A,B,C;
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);

    if((float)(A + B) > C && (float)(A + C) > B && (float)(B + C) > A){
        printf("Perimetro = %.1f\n",(float)(A+B+C));
    }else
    {
        printf("Area = %.1f\n",(float)((A+B)*C)/2);
    }



    return 0;
}
