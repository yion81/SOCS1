#include <stdio.h>

int main()
{
    double x,y,out,price;
    scanf("%lf %lf",&x,&y);
    price=x-y;
    out=price/x*100;
    printf("%.2lf%%\n",out);
}