#include <stdio.h>

int main()
{
    float a,b,c,d,out,out1,out2;
    for (int i=0;i<3;i++)
    {
    scanf("%f %f %f %f",&a,&b,&c,&d);
    out=a+b+c;
    out1=out*2;
    out2=out1+d;
    printf("%.2f\n",out2);
    }
}