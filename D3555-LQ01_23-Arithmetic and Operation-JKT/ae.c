#include <stdio.h>

int main()
{
    double dmg,increase,out=0,n,n1,n2;
    scanf("%lf", &n);
    for (int i=1;i<=n;i++)
    {
        dmg = 100;
        n1 = i-1;
        increase = n1*50;
        out = out+dmg+increase;
    }
    printf("%.0lf\n", out);
}