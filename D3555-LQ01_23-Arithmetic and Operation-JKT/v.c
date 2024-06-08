#include <stdio.h>

int main()
{
    int n;
    double ce,re,fa,ke;
    scanf("%d",&n);
    if (n==3)
    {
        for (int i=0;i<n;i++)
        {
            scanf("%lf",&ce);
            re=0.8*ce;
            fa=1.8*ce+32;
            ke=ce+273;
            printf("%.2lf %.2lf %.2lf\n",re,fa,ke);
        }
    }
}