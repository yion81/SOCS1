#include <stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=1;i<=tc;i++)
    {
        long long x;
        scanf("%lld",&x);
        int length=0;

        while (x>0)
        {
            x/=10;
            length++;
        }
        if (length==0)
        length=1;
        printf("Case #%d: %d\n",i,length);
    }
}