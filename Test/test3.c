#include <stdio.h>

int main()
{
    float x,y,pr;
    scanf("%f %f",&x, &y);
    pr=x/y*100;
    printf("%.2f%%", pr);
}