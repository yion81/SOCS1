#include <stdio.h>

int main()
{
    int T;
    double A,B,x,y;

    scanf("%d", &T);

    if (T==3)
    {
        scanf("%lf %lf", &A, &B);
        x = A*B;
        y = x/360;
        printf("%.2lf",y);
    }

}