#include <stdio.h>

int main()
{
    long long int n,pos=0;
    scanf("%lld",&n);
    int x[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for (int j=0;j<n;j++)
    {
        pos+=x[j];

        if (pos==30)
        pos=10;

        if (pos==12)
        pos=28;

        if (pos==35)
        pos=7;

        if (pos>=40)
        pos-=40;
    }
    printf("%lld\n",pos);
}