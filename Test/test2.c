#include <stdio.h>

int main()
{
    int A,B;
    double out,Discount;

    scanf("%d %d",&A,&B);
    Discount= A-B;
    out= Discount/A*100;
    printf("%.2lf%%", out);
}