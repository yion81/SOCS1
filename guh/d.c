#include <stdio.h>

int main()
{
    int n,m,x[101],a,b,sum;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);getchar();
    }
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if (a==b)
        {
            printf("Case #%d: %d\n",i,x[a]);
        }
        else
        {
            for (int j=a;j<=b;j++)
            {
                sum += x[j];
            }
            printf("Case #%d: %d\n",i,sum);
            sum=0;
        }
    }
    
}