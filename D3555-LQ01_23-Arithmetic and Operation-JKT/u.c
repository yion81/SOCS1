#include <stdio.h>

int main()
{
    int n;
    double x,y,out,calc;
    scanf("%d", &n);
    if (n==3)
    {
        for (int i=0;i<n;i++)
        {
        scanf("%lf %lf",&x,&y);
        calc=x*y;
        out=calc/360;
        printf("%.2lf\n",out);
        }
    }
}