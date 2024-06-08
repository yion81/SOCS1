#include <stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        int len,cap,current;
        scanf("%d %d %d",&len,&cap,&current);
        int x[len];
        for (int j=0;j<len;j++)
        {
            scanf("%d",&x[j]);
        }
        for (int j=0;j<len;j++)
        {
            if (x[j]<=cap && x[j]>current)
            {
                current=x[j];
            }
        }
        printf("Case #%d: %d\n",i,current);
    }
}