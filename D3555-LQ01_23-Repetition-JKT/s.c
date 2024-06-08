#include <stdio.h>

int main()
{
    long long int n,s,count=0;
    scanf("%lld %lld",&n,&s);
    int x[n];
    for (int i=0;i<n;i++)
    {
        scanf("%ld",&x[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (s>x[i])
        {
            count++;
        }
    }
    printf("%lld\n",count);
    return 0;
}