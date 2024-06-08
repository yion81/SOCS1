#include <stdio.h>

int main()
{
    double x,y,output,discount,discount1,price;
    
    for (int i=0;i<4;i++)
    {
        scanf("%lf %lf", &x, &y);
        discount= x/100;
        discount1= 1-discount;
        price=y/discount1;
        printf("$%.2lf\n", price);
    }
}