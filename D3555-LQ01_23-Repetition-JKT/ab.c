#include <stdio.h>

int main()
{
    int n,total,a,b,c,d;
    scanf ("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d %d %d %d %d",&total,&a,&b,&c,&d);
        int out=0;
        for (int j=1;j<=total;j++)
        {
            if (j%a==0 || j%b==0 || j%c==0 || j%d==0)
            {
                out++;
            }
        }
        printf("Case #%d: %d\n",i,out);
    }
}