#include <stdio.h>

int main()
{
    long long int n,a,b,acq;

    scanf("%lld",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%lld %lld",&a,&b);
        acq=a*b;
        if (acq%2!=0)
        {
            printf("Case #%d: Need more frogs\n",i);
        }
        else
        {
            printf("Case #%d: Party time!\n",i);
        }
    }
    return 0;
}