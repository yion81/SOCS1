#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    long int out;
    scanf("%d",&a);
    out = pow(2,a);
    out = out-1;
    printf("%ld\n", out);
}