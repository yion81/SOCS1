#include <stdio.h>

int main()
{
    int n;
    long long int len,money,temp,candy;
    scanf("%d",&n);getchar();
    for (int i=1;i<=n;i++)
    {
        scanf("%lld %lld",&len,&money);
        candy=0;
        for (int j=0;j<len;j++)
        {
            scanf("%lld",&temp);getchar();
            candy=((money/temp)>candy)?money/temp:candy;
        }
        

        printf("Case #%d: %lld\n",i,candy);
    }
}