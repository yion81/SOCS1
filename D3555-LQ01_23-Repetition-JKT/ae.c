#include <stdio.h>

int main()
{
    double r,h,x,pi=3.14,out;
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%lf %lf",&r,&h);
        out = (2*pi*r*h) + (2*pi*r*r);
        printf("Case #%d: %.2lf\n",i,out);
    }
}