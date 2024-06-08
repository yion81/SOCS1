#include <stdio.h>

int main()
{
    long long int x=1;
    int q;
    scanf("%d",&q);
    for (int i=0;i<q;i++)
    {
    x*=2;
    x+=1;
    }
    printf("%lld\n",x);
}