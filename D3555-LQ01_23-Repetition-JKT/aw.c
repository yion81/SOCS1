#include <stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int len,count=0;
        scanf("%d",&len);
        int x[len];
        for (int j=0;j<len;j++)
        {
            scanf("%d",&x[j]);
        }
        int high=x[0];
        for (int j=1;j<len;j++)
        {
                if (x[j]>=high)
                {
                    high=x[j];
                }
        }
        for (int j=0;j<len;j++)
        {
            if(x[j]==high)
            {
                count++;
            }
        }
        printf("Case #%d: %d\n",i,count);
    }
}