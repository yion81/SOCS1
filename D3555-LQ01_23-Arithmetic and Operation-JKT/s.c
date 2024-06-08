5,#include <stdio.h>

int main()
{
    double l,b,h,out,out1,out2,out3,out4;
    scanf("%lf %lf %lf",&l,&b,&h);
    out1=l*b*3;
    out2=b*h;
    out=out1+out2;
    printf("%.3lf\n", out);
}