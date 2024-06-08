#include <stdio.h>

int main()
{
    int n,k=3;
    long long out;

    scanf("%d",&n);
    int a=1,b=1,c=1;
    for (int i=1;i<=(n+k-1);i++)
    {
        a*=i;
    }
    //printf("%d",a);
    for (int j=1;j<=(k-1);j++)
    {
        b*=j;
    }
    for (int x=1;x<=n;x++)
    {
        c*=x;
    }
    out = a / (b*c);
    printf("%lld\n",out);
}