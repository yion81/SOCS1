#include <stdio.h>

int main()
{
    double harga,bunga,bunga1,calc2;
    scanf("%lf %lf",&harga,&bunga);
    bunga=bunga/100;
    
    for (int i=0;i<3;i++)
    {
        bunga1=harga*bunga;
        harga=harga+bunga1;
    }
    printf("%.2lf\n", harga);
}