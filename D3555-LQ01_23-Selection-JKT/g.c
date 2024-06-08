#include <stdio.h>

int main()
{
    long long int x,y,a,b,out1,out2;

    scanf("%lld %lld %lld %lld",&x,&y,&a,&b);
    out1=x*y;
    out2=a-b;
    if (out1==out2)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}