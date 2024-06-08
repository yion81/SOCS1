#include <stdio.h>

int main()
{
    int n,len,money,sum;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d %d",&len,&money);
        int x[len];
        for (int j=0;j<len;j++)
        {
            scanf("%d",&x[j]);
        }
        sum = 0;
        for (int j=0;j<len;j++)
        {
            sum+=x[j];
        }
        if (sum>money)
        {
            printf("Case #%d: Wash dishes\n",i);
        }
        else
        {
            printf("Case #%d: No worries\n",i);
        }
    }
    return 0;
}