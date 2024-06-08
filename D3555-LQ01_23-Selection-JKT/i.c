#include <stdio.h>

int main()
{
    long int n;
    double x,a,b,c;

    scanf("%ld",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        x=a*b/100;
        if (x>c)
        {
            printf("Case #%d: %.0lf\n",i,c);
        }
        else
        {
            printf("Case #%d: %.0lf\n",i,x);
        }
    }
}