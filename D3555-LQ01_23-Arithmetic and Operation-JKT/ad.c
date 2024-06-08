#include <stdio.h>

int main()
{
    double x,y,z,out;
    scanf("%lf %lf %lf", &x,&y,&z);
    x = x*0.2;
    y = y*0.3;
    z = z*0.5;
    out = x+y+z;
    printf("%.2lf\n", out);
}