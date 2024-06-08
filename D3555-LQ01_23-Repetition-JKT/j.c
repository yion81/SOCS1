#include <stdio.h>

int main()
{
    long int len,out=0;
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%ld",&len);
        int x[len];
        for (int j=0;j<len;j++)
        {
            scanf("%d",&x[j]);
        }
        out = x[0];
        for (int j=1;j<len;j++)
        {
            out += x[j];
        }
        printf("Case #%d: %ld\n",i,out);
    }
}