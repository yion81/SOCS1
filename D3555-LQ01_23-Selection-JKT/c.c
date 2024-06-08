#include <stdio.h>

int main()
{
    int n,a,b;

    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if (a>b)
        {
            printf("Case #%d: Go-Jo\n",i);
        }
        else
        {
            printf("Case #%d: Bi-Pay\n",i);
        }

    }

}