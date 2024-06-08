#include <stdio.h>

int main()
{
    int t;
    double p,n,out,out1;
    scanf("%d",&t);
    if (t==3)
    {
        for (int i=0;i<t;i++)
        {
            scanf("%lf %lf",&p,&n);
            out1=p/100;
            out=out1*n;
            printf("%.2lf\n",out);
        }
    }
}