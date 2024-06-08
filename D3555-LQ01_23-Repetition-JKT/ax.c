#include <stdio.h>

int main()
{
    int len;
    long long count=0;
    scanf("%d",&len);
    for (int i=0;i<len;i++)
    {
        long long x;
        scanf("%lld",&x);
        if (x>0)
        {
            count+=x;
        }
    }
    printf("%lld\n",count);
}