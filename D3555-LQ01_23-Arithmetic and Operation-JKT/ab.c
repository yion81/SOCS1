#include <stdio.h>

int main()
{
    double dmg,increase,out=0,n,outdmgmulti;
    scanf("%lf", &n);
    for (int i=1;i<=n;i++)
    {
        dmg = 100;
        outdmgmulti = i-1;
        increase = outdmgmulti*50;
        out = out+dmg+increase;
    }
    printf("%.0lf\n", out);
}